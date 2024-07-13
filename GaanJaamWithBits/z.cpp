#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;

    int arr[n + 1] {}, pref_xor[n + 1] {};

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        pref_xor[i] = pref_xor[i - 1] ^ arr[i];
    }

    int cnt[31][2] {};

    int ans = 0;

    for (int i = 0; i <= n; i++) {

        for (int k = 0; k < 31; k++) {
            int crnt_bit = (pref_xor[i] >> k) & 1;

            if(crnt_bit == 0) {
                ans += cnt[k][1] * (1LL << k);
            } else {
                ans += cnt[k][0] * (1LL << k);
            }

            cnt[k][crnt_bit]++;
        }
    }
 
    cout << ans << "\n";
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