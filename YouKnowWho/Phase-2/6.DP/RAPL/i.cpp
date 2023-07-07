#include<bits/stdc++.h>
#define ll long long
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
    int n;
	cin >> n;
	vector<int> v(n);
	for(auto &x: v) cin >> x;
	vector<int> fc, rc;
	unordered_map<int, int> cnt;
	for(int i = 0; i < n; i++) {
		cnt[v[i]] += 1;
		fc.push_back(cnt[v[i]]);
	}

    // for(auto f : fc) cout << f << " "; cout << endl;
	cnt.clear();
	for(int i = n - 1; i >= 0; i--){
		cnt[v[i]] += 1;
		rc.push_back(cnt[v[i]]);
	}
    // for(auto r : rc) cout << r << " ";
	o_set<pair<int, int>> st;
	ll ans = 0, k = 0;
	for(int i = n - 2; i >= 0; i--) {
        int x = rc[n - 2 - i], y = fc[i];
		st.insert({rc[n - 2 - i], k++});
		ans += st.order_of_key({fc[i], 0});
	}
	// cout << ans << '\n';
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