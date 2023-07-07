#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;

    vector<int> vec(n + 1, 0), pref(n + 1, 0), suff(n + 1, 0);

    for(int i = 1; i <= n; i++) {
        cin >> vec[i];
        (i == 1) ? pref[i] = vec[i] : pref[i] = __gcd(vec[i], pref[i - 1]);
    }

    if(n == 2) {
        cout << 1LL * max(vec[1], vec[2]) << "\n";
        return;
    }

    for(int i = n; i >= 1; i--) {
        (i == n) ? suff[i] = vec[i] : suff[i] = __gcd(vec[i], suff[i + 1]);
    }
    
    //if 1th index is not included then , pref[n - 1] is the maximum gcd right now
    //if nth index is not included then, suff[2] is the maximum gcd right now
    int ans = max(pref[n - 1], suff[2]);  

    //for each index , check if ith element is not included then, what can be the gcd, maximum of it is the answer
    for(int i = 2; i < n; i++) {
        ans = max(ans, __gcd(pref[i - 1], suff[i + 1]));
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