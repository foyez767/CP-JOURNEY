#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;

    int ans = 0;
    if(k == 0) {
        cout << (n * n) << "\n";
        return;
    }

    for(int x = k; x <= n; x++) {
        int cycle = n / x;
        int ext = max(0LL, n - cycle * x);

        (ext - k + 1 < 0) ? ans += (cycle * (x - k)) : ans += (cycle * (x - k) + (ext - k + 1));
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