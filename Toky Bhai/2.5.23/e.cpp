#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
template <typename T> using o_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
    ll n, k; cin >> n >> k;

    vector<ll> vec (n + 1, 0);

    o_set<ll> se;
    bool batti = true;

    for(ll i = 1; i <= n; i++) {
        cin >> vec[i];
        if(i <= k)
            se.insert(vec[i]);
    }

    cout << (*(se.find_by_order((k - 1) / 2))) << " "; 

    for(ll i = k + 1; i <= n; i++) {
        se.erase(se.lower_bound(vec[i - k] - 1));
        se.insert(vec[i]);
        cout << (*(se.find_by_order((k - 1) / 2))) << " ";
    }
    cout << "\n";

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