//think: for opening doors with symbol 'X' , i need 'x' key
//
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int room; string s; cin >> room >> s;

    map<char,int> mp;

    int ans = 0;
    for(int i = 0; i < s.length(); i++) {
        if(i % 2 == 0) {
            mp[s[i]]++;
        } else {
            char ch = towlower(s[i]);

            if(mp[ch] >= 1) {
                mp[ch]--;
            } else {
                ans++;
            }
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