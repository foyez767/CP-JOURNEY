#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int l, r; cin >> l >> r;

    int ans = 0;

    for (int k = 0; k < 61; k++) {
        if ((r - l) > (1LL << k)) {
            ans += (1LL << k);
        } else if (((r >> k) & 1) != ((l >> k) & 1)) {
            ans += (1LL << k);
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