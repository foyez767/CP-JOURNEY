#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;

    int arr[n] {};

    for (int i = 0; i < n; i++) cin >> arr[i];

    int cnt[31][2] {};

    int ans = 0;

    for (int i = 0; i < n; i++) {

       int k = __lg(arr[i]);
       int msb = (arr[i] >> k) & 1;

       ans += cnt[k][msb];
       cnt[k][msb]++;
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