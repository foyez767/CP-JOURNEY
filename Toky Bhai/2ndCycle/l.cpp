#include<bits/stdc++.h>
#define ll long long
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
template <typename T> using o_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
    ll n; cin >> n;

    vector<ll> arr(n + 1, 0), brr(n + 1, 0), AB(n + 1, 0), BA(n + 1, 0);

    for(ll i = 1; i <= n; i++) cin >> arr[i];
    for(ll i = 1; i <= n; i++) cin >> brr[i];

    for(ll i = 1; i <= n; i++)  {
        AB[i] = arr[i] - brr[i];
        BA[i] = brr[i] - arr[i];
    }

    ll ans = 0;
    o_set<ll> se;

    for(ll i = n; i >= 1; i--) {
        ans += se.order_of_key(AB[i]);
        se.insert(BA[i]);
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