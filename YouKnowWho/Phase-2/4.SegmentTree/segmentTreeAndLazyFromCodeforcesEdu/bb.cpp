//multiplication and sum
#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 4e5 + 7,m = 1e9+7;
ll arr[N],tree[4*N];
vector<ll>lazy(4*N,1);

void pull(ll node){
    ll left = 2 * node, right = 2 * node + 1;
    tree[node] = (tree[left] % m + tree[right] % m) % m;    // *** change this
}
 
void build(ll node,ll b,ll e){
    lazy[node] = 1;     // *** change this
    if(b == e){
        tree[node] = arr[b];
        return;
    }

    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b + e) / 2;
    build(left,b,mid);
    build(right,mid+1,e);

    pull(node);
    }

void push(ll node, ll b, ll e){     // *** change this
    if(lazy[node] == 1)
        return;
    tree[node] = ((tree[node] % m) * (lazy[node] % m)) % m;

    if(b != e ){
        ll left = 2 * node, right = 2 * node + 1;
        lazy[left] = ((lazy[node] % m ) * (lazy[left] % m)) % m;
        lazy[right] = ((lazy[node] % m ) * (lazy[right] % m)) % m;
    }
 
    lazy[node] = 1;
}
 
ll combine(ll a, ll b){ // *** change this
    return (a % m + b % m) % m;
}
 
void update(ll node,ll b,ll e,ll l,ll r,ll x){
    push(node,b,e);
 
    if(b > r or e < l)
        return ;
    if(b >= l and e <= r){
        lazy[node] = x;     //***set lazy or value of propagation
        push(node,b,e);
    return;
    }
 
    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b + e) / 2;
    update(left,b,mid,l,r,x);
    update(right,mid+1,e,l,r,x);
 
    pull(node);
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
    ll n,q,a,l,r,v;     cin >> n >> q;
    for(ll i = 1; i <= n; i++) arr[i] = 1;

    build(1,1,n);
    // for(ll i = 1; i < 4*n; i++) cout<< tree[i] << " ";cout<<endl;
    // for(ll i = 1; i < 4*n; i++) cout<< lazy[i] << " ";cout<<endl;

    while(q--){
        cin >> a;
        if(a == 1){
            cin >> l >> r >> v;
            update(1,1,n, l + 1, r , v);
            // for(ll i = 1; i < 4*n; i++) cout<< tree[i] << " ";cout<<endl;
            // for(ll i = 1; i < 4*n; i++) cout<< lazy[i] << " ";cout<<endl;
        }else{
            cin >> l >> r;
            cout << query(1,1,n, l + 1, r) << "\n";
            // for(ll i = 1; i < 4*n; i++) cout<< tree[i] << " ";cout<<endl;
            // for(ll i = 1; i < 4*n; i++) cout<< lazy[i] << " ";cout<<endl;
        }
    }
 
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    // cin >> t;
    for(ll i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}