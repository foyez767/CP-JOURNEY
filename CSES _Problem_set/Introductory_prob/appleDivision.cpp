#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;

    int arr[n + 1] {}, tsum = 0;

    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        tsum += arr[i];
    }

    
    int cnt = tsum / 2, cnt2 = 0;

    for(int i = 1; i <= n; i++){
       if(cnt2 < tsum)
        
    }

    cout << abs(cnt - cnt2) << "\n";
 
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