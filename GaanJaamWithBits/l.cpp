#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n, m, k; cin >> n >> m >> k;

    vector<int> player (m + 1, 0);

    for (int i = 0; i <= m; i++) cin >> player[i];

    int ans = 0, fedo = player[m];

    for (int i = 0; i < m; i++) {
        int differ_army = __builtin_popcount(fedo ^ player[i]);

        if (differ_army <= k) {
            ans++;
        }
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