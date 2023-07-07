#include<bits/stdc++.h>
#define ll long long
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
    ll n,cnt = 0;   cin >> n;
    vector<ll> vec(n,0);
    for(auto &x : vec) cin >> x;

    // for(auto v : vec) cout << v << " ";cout << "\n";
    reverse(vec.begin(),vec.end());
    o_set<ll> se;

    for(ll i = 0; i < vec.size(); i++){
        cnt += se.order_of_key(vec[i]);
        se.insert(vec[i]);
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