#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;

    vector<int> vec(n + 1, 0), pref(n + 1, 0);

    for(int i = 1; i <= n; i++) {
        cin >> vec[i];
        pref[i] = (vec[i] + pref[i - 1]);
    }

    int ans = 0, crnt_sum = 0;
    
    for(int i = 1; i <= k; i++) {
        ans += (i * vec[i]);
    }
    crnt_sum = ans;

    for(int i = k + 1; i <= n; i++) {
        crnt_sum = crnt_sum - vec[i - k] + (vec[i] * k) - pref[i - 1] + pref[i - k];
        ans = max(ans, crnt_sum);
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