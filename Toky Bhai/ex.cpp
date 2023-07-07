#include<bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
    string s; cin >> s;

    int ans2 = 0;

    map<char, bool> atend;

    for(int i = 0; i < s.length(); i++) {
        atend[s[i]] = true;
    }

    for(char ch = 'a'; ch <= 'z'; ch++) {
        string st = s;
        
        if(!atend[ch])
            continue;

        for(int i = 0; i < st.length(); i++) {
            (st[i] == ch) ? st[i] = '1' : st[i] = '0';
        }

        int cnt = 0;

        for(int i = 0; i < st.length(); i++) {
            if(st[i] == '0') {
                cnt++;
            } else {
                ans2 = max(ans2, cnt);
                cnt = 0;
            }
        }
        ans2 = max(ans2, cnt);
        
    }

    // cout << (int)log2(ans2) << "\n";
    int ans = 0;

    while(ans2 > 1) {
        ans2 /= 2;
        ans++;
    }
 
    (!(ans2 and ans)) ? cout << ans2 << "\n" : cout << ans << "\n";
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