#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;

    int cnt[30] {};

    for (int i = 1; i <= n; i++) {
        int x; cin >> x;

        for (int k = 0; k < 30; k++) {
            if ((x >> k) & 1) {
                cnt[k]++;
            }
        }
    }

    for (int k = 1; k <= n; k++) {
        bool batti = true;

        for (int j = 0; j < 30; j++) {
            if (cnt[j] % k) {
                batti = false;
                break;
            }
        }

        if (batti) {
            cout << k << " ";
        }
    }

    cout << "\n";
 
}
 
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}