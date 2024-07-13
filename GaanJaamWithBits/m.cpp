#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;

    vector<int> rotate (n, 0);

    for (auto &x : rotate) cin >> x;

    for (int mask = 0; mask < (1 << n); mask++) {
        int clock = 0, anti_clock = 0;

        for (int k = 0; k < n; k++) {
            if ((mask >> k) & 1) {
                anti_clock += rotate[k];
            } else {
                clock += rotate[k];
            }
        }

        clock %= 360;
        anti_clock %= 360;

        if (clock == anti_clock) {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
 
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