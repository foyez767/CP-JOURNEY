#include<bits/stdc++.h>
#define ll long long
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve(){
    int n; cin >> n;

    vector<ll> vec(n, 0);
    for(auto &x : vec) cin >> x;

    map<ll,ll> cnt;

    vector<ll> ls, rs;

    for(int i = 0; i < n; i++){
        cnt[vec[i]]++;
        ls.push_back(cnt[vec[i]]);
    }
 
    cnt.clear();

    for(int i = n - 1; i >= 0; i--){
        cnt[vec[i]]++;
        rs.push_back(cnt[vec[i]]);
    }

    ll k = 0, ans = 0;
    o_set<pair<ll,ll>> se;

    for(int i = n - 2; i >= 0; i--){
        se.insert({rs[n - 2 - i], k++});
        ans += se.order_of_key({ls[i], 0});
    }
    
    cout << ans << "\n";
}
 
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}