#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;
    int pref[n + 1] {};

    for(int i = 1; i <= n; i++){
        cin >> pref[i];
        pref[i] += pref[i - 1];
    }

    if(pref[n] % 3 != 0){
        cout << "0" << "\n";
        return;
    }

    int sum = pref[n] / 3, ans = 0, cnt = 0;

    for(int i = n - 1; i >= 1; i--){
        if(pref[i] == sum){
            ans += cnt;
        }
        if(pref[i] == 2 * sum){
            cnt++;
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