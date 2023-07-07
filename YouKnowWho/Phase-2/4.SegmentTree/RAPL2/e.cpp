#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 2e5 + 7;
ll arr[N],tree[4*N],lazy[4*N];

void pull(ll node){
    ll left = 2 * node, right = 2 * node + 1;
    tree[node] = (tree[left] + tree[right]);    // *** change this
}
 
void push(ll node, ll b, ll e){     // *** change this
    if(lazy[node] == 0)
        return;
    tree[node] = tree[node] + lazy[node];

    if(b != e){
        ll left = 2 * node, right = 2 * node + 1;
        lazy[left] = lazy[left] + lazy[node];
        lazy[right] = lazy[right] + lazy[node];
    }
 
    lazy[node] = 0;
}
 
ll combine(ll a, ll b){ // *** change this
    return (a + b);
}
 
void update(ll node,ll b,ll e,ll l,ll r,ll x){
    push(node,b,e);
 
    if(b > r or e < l)
        return ;
    if(b >= l and e <= r){
        lazy[node] += x;     //***set lazy or value of propagation
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
    memset(tree, 0, sizeof(tree));
    memset(lazy, 0, sizeof(lazy));
    int n, q; cin >> n >> q;

    vector<pair<ll, ll>> seg;
    vector<ll>points;
    set<ll> all;

    for(int i = 1; i <= n; i++) {
        int l, r; cin >> l >> r;
        seg.push_back({l, r});
        all.insert(l), all.insert(r);
    }

    for(int i = 1; i <= q; i++) {
        int p; cin >> p;
        points.push_back(p);
        all.insert(p);
    }

    map<ll,ll> id;

    auto it = all.begin();
    int k = 1;

    while(it != all.end()) {
        id[*it] = k++;
        it++;
    }


    for(int i = 0; i < seg.size(); i++) {
        int l = seg[i].first, r = seg[i].second;
        update(1, 1, k,id[l], id[r], 1);
    }

    for(int i = 0; i < points.size(); i++) {
        cout << query(1, 1, k, id[points[i]], id[points[i]]) << "\n";
    }

}
 
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case " << i << ": \n";
        solve();
    }
    
    return 0;
}