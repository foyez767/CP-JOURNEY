#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 2e5 + 7;
ll arr[N],tree[4*N],lazy[4*N];

void pull(ll node){
    ll left = 2 * node, right = 2 * node + 1;
    tree[node] = __gcd(tree[left] , tree[right]);    // *** change this
}
 
void build(ll node,ll b,ll e){
    lazy[node] = 0;     // *** change this
    if(b == e){
        tree[node] = arr[b];
        return;
    }

    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b + e) >> 1;
    build(left,b,mid);
    build(right,mid+1,e);

    pull(node);
    }

void push(ll node, ll b, ll e){     // *** change this
    if(lazy[node] == 0)
        return;
    if(b == e)
        tree[node] = tree[node] + lazy[node];

    if(b != e){
        ll left = 2 * node, right = 2 * node + 1;
        lazy[left] = lazy[left] + lazy[node];
        lazy[right] = lazy[right] + lazy[node];
    }
 
    lazy[node] = 0;
}
 
ll combine(ll a, ll b){ // *** change this
    return __gcd(a, b);
}
 
void update(ll node,ll b,ll e,ll l,ll r,ll x){
    push(node,b,e);
 
    if(b > r or e < l)
        return ;
    if(b >= l and e <= r){
        lazy[node] = lazy[node] + x;     //***set lazy or value of propagation
        push(node,b,e);
    return;
    }
 
    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b + e) >> 1;
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
    ll n, m; cin >> n >> m;

    for(ll i = 1; i <= n; i++) cin >> arr[i];

    build(1, 1, n);


    for(ll i = 1; i <= m; i++) {
        ll x; cin >> x;
        update(1, 1, n, 1, n, x);
        cout << (1LL* query(1, 1, n, 1, n)) << " ";
        update(1, 1, n, 1, n, -x);
    }
    cout << "\n";
 
}
 
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    // cin >> t;
    for(ll i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}