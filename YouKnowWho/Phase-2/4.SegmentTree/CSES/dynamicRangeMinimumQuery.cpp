#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 2e5+9,inf = 1e13;
ll arr[N], tree[4*N];

ll combine(ll a,ll b){
    return min(a , b); // *** change this
}

void build(ll node,ll b,ll e){
    if(b == e){
        tree[node] = arr[b];	//***change this
        return;
    }
    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b + e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    //***change this
    tree[node] = min(tree[left] , tree[right]);
}

ll query(ll node,ll b,ll e, ll l, ll r){
    if(b > r or e < l)
        return inf;   // *** change this with appropiate value
    if(b >= l and e <= r)
        return tree[node];

    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b+e)/2;
 
return combine(query(left,b,mid,l,r),query(right,mid+1,e,l,r));
}

void update(ll node,ll b,ll e, ll i,ll x){
    if(i < b or i > e)
        return;
    if(b == e and b == i){
        tree[node] = x;     // ****Update with appropiate value
        return;
}   

    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b + e)/2;
    update(left,b,mid,i,x);
    update(right,mid+1,e,i,x);
    //***change this
    tree[node] = min(tree[left] , tree[right]);
}

void solve(){
    int n, q; cin >> n >> q;

    for(int i = 1; i <= n; i++) cin >> arr[i];
    build(1, 1, n);

    while(q--){
        int x, l, r; cin >> x >> l >> r;

        if(x == 1){
            update(1, 1, n, l, r);
        }else{
            cout << query(1, 1, n, l ,r) << "\n";
        }
    }
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}