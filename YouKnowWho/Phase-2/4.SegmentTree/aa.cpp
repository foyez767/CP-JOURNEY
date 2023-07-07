#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 1e7+9;
ll arr[N], tree[4*N];

ll combine(ll a,ll b){
    return (a + b); // *** change this
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
    tree[node] = (tree[left] + tree[right]);
}

ll query(ll node,ll b,ll e, ll l, ll r){
    if(b > r or e < l)
        return 0;   // *** change this with appropiate value
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
        tree[node] = 1;     // ****Update with appropiate value
        return;
    }

    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b + e)/2;
    update(left,b,mid,i,x);
    update(right,mid+1,e,i,x);
    //***change this
    tree[node] = (tree[left] + tree[right]);
}

void solve(){
    ll n,q,cnt = 0,x,i = 0;   cin >> q;
    vector<ll>vec(q,0); 
    
    for(auto &x : vec) cin >> x;

    reverse(vec.begin(),vec.end());
    n = *(max_element(vec.begin(),vec.end()));

    build(1,0,n);
    
    while(q--){
        x = vec[i];
        cnt += query(1, 0, n, 0, x - 1);
        update(1, 0, n, x, x);
        i++;
    }
    cout << cnt << "\n";
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    cin >> t;

    for(ll i = 1; i <= t; i++){
        cin.ignore();
        solve();
    }
    
    return 0;
}