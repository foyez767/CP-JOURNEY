#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    string s; cin >> s;

    bool batti = false;

    for (int i = 0; i < s.length() - 1; i++) {
        if(s[i] == '0' and batti == false) {
            batti = true;
        } else {
            cout << s[i];
        }
    }

    if(batti) {
        cout << s.back() << "\n";
    }
 
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