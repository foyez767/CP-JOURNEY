#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> arr(n, 0);

    for(auto &x : arr) cin >> x;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        arr[i] -= x;
    }

    sort(arr.begin(), arr.end());

    int ans = 0;

    // for(auto v : arr) cout << v << " "; cout << endl;

    for(int i = 0; i < n; i++) {
        if(arr[i] <= 0) continue;
        int pos = lower_bound(arr.begin(), arr.end(), -1LL * arr[i] + 1) - arr.begin();
        ans += (i - pos);
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