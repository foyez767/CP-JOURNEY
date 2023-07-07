#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin >> s;

    int ans = 1, cnt = 1;   //initially i am ignoring first character hence cnt = 1, ans = 1

    for(int i = 1; i < s.length(); i++) {
        if(s[i] == s[i - 1]){
            cnt++;
        } else {
            ans = max(ans, cnt);
            cnt = 1;    //if s[i] != s[i - 1] then s[i] is the first charater of the current sequence
        }
    }

//current value of cnt can be maximum
    cout << max(ans, cnt) << "\n";
 
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