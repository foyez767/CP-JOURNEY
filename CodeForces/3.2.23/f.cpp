#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 2e5 + 7;
ll arr[N],tree[4*N],lazy[4*N];

ll sod(ll n){
    ll sum = 0;

    while(n){
        sum += (n % 10);
        n /= 10;
    }

return sum;
}
 
void build(ll node,ll b,ll e){
    lazy[node] = 0;     // *** change this
    if(b == e){
        tree[node] = arr[b];
        return;
    }

    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b + e) / 2;
    build(left,b,mid);
    build(right,mid+1,e);

}

void push(ll node, ll b, ll e){     // *** change this
    if(lazy[node] == 0)
        return;
    // tree[node] = tree[node] + lazy[node] * (e - b + 1);
    if(b == e){
        int x = lazy[node];
        for(int i = 1; i <= x; i++){
           tree[node] = sod(tree[node]);
        }
    }

    if(b != e){
        int left = 2 * node, right = 2 * node + 1;
        lazy[left] = lazy[left] + lazy[node];
        lazy[right] = lazy[right] + lazy[node];
    }
 
    lazy[node] = 0;
}
 
ll combine(ll a, ll b){ // *** change this
    return (a+b);
}
 
void update(ll node,ll b,ll e,ll l,ll r){
    push(node,b,e);
 
    if(b > r or e < l)
        return ;
    if(b >= l and e <= r){
        lazy[node] = 1;     //***set lazy or value of propagation
        push(node,b,e);
    return;
    }
 
    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b + e) / 2;
    update(left,b,mid,l,r);
    update(right,mid+1,e,l,r);
 
}
 
ll query(ll node,ll b,ll e,ll l,ll r){
    push(node,b,e);
    if(b > r or e < l)
        return 0;		//***change this
    if(b >= l and e <= r)
        return tree[node];
 
    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b + e) / 2;
return combine(query(left,b,mid,l,r),query(right,mid+1,e,l,r));
}

void solve(){
    ll n,q,l,r,x;     cin >> n >> q;
    
    for(int i = 1; i <= n; i++) cin >> arr[i];
    build(1, 1, n);

    while(q--){
        cin >> x;
        if(x == 1){
            cin >> l >> r;
            update(1, 1, n, l, r);
        }else {
            cin >> l;
            cout << query(1, 1, n, l, l) << "\n";
        }
    }
 
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}