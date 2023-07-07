#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;

    int ans = 0;

    for(int i = 0; i < n - 2; i++) {
        if(s[i] == 'x' and s[i + 1] == 'x' and s[i + 2] == 'x') {
            ans++;
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