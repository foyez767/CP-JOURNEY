#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 2e5+9;
ll arr[N];
pair<ll,ll> tree[4*N];

vector<ll> ans;
pair<ll,ll> combine(pair<ll,ll> p1, pair<ll,ll> p2){
    vector<ll> vec;
    vec.push_back(p1.first);
    vec.push_back(p1.second);
    vec.push_back(p2.first);
    vec.push_back(p2.second);

    sort(vec.begin(),vec.end());

return make_pair(vec[0],vec[1]);
}

void pull(ll node){
    ll left = 2 * node, right = 2 * node + 1;
    pair<ll,ll> p1 = tree[left], p2 = tree[right];

    vector<ll> vec;
    vec.push_back(p1.first);
    vec.push_back(p1.second);
    vec.push_back(p2.first);
    vec.push_back(p2.second);

    sort(vec.begin(),vec.end());

    tree[node] = make_pair(vec[0],vec[1]);
}

void build(ll node,ll b,ll e){
    if(b == e){
        tree[node] = make_pair(arr[b],INT64_MAX);	//***change this
        return;
    }
    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b + e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    //***change this
    pull(node);
}

pair<ll,ll> query(ll node,ll b,ll e, ll l, ll r){
    if(b > r or e < l)
        return make_pair(INT64_MAX,INT64_MAX);   // *** change this with appropiate value
    if(b >= l and e <= r)
        return tree[node];

    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b+e)/2;
 
return combine(query(left,b,mid,l,r),query(right,mid+1,e,l,r));
}


void solve(){
    ll n, q, l, r;   cin >> n >> q;

    for(ll i = 1; i <= n; i++){
        cin >> arr[i];
    }

    build(1, 1, n);

    while(q--){
        cin >> l >> r;

        pair<ll,ll> p = query(1, 1, n, l + 1, r + 1);
        cout << (ll)abs(p.first - p.second) << "\n";
    }

    memset(arr, 0, sizeof(arr));
    memset(tree, 0,sizeof(tree));
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    // cin >> t;
    for(ll i = 1; i <= t; i++){
        cout << "Case " << i << ": \n";
        solve();
    }
    
    return 0;
}