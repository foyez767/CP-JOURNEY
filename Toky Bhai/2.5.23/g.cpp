#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;

    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            int ans = i * j;
            int ans2 = sqrt(ans);
            if(ans == ans2 * ans2) {
                cnt++;
                // cout << "(" << i << " : "<< j << " )" << endl;
            }
        }
    }

    cout << cnt << endl;
 
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