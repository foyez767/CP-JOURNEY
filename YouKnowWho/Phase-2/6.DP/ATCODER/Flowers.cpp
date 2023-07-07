#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 2e5+9;
ll height[N], tree[4*N], beuty[N];

ll combine(ll a,ll b){
    return max(a , b); // *** change this
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
        tree[node] = max(x, tree[node]);     // ****Update with appropiate value
        return;
}

    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b + e)/2;
    update(left,b,mid,i,x);
    update(right,mid+1,e,i,x);
    //***change this
    tree[node] = max(tree[left] , tree[right]);
}

void solve(){
    int n; cin >> n;

    for(int i = 1; i <= n; i++) cin >> height[i];

    for(int i = 1; i <= n; i++) cin >> beuty[i];

    map<int,int> id;

    for(int i = 1; i <= n; i++){
        id[height[i]] = i;
    }

    ll dp[n + 1] {};

    for(int h = 1; h <= n; h++){
        dp[id[h]] = query(1, 1, n, 1, id[h] - 1) + beuty[id[h]];
        update(1, 1, n, id[h], dp[id[h]]);
    }

    cout << query(1, 1, n, 1, n) << "\n";
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
