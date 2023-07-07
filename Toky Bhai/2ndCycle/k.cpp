#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, mod; cin >> n >> mod;

    char dig = '0';int num = 0;

    for(char i = '1'; i <= '9'; i++) {
        string s (n, i);

        int ans = 0, cnt = 0, batti = 0;

        for(int j = 0; j < s.size(); j++) {
            ans = (ans * 10 + (s[j] - '0')) % mod;
            if(ans == 0) {
                cnt = max(cnt, j + 1);
                batti = 1;
            }
        }
        if(ans == 0) {
            cnt = max(cnt, n);
            batti = 1;
        }
        if(batti) {
            if(cnt > num) {
                num = cnt; dig = i;
            } else if(cnt == num and i > dig) {
                    num = cnt, dig = i;
            }
        }
    }

    if(dig == '0' and num == 0) cout << -1 << "\n";
    else {
        string s (num, dig);
        cout << s << "\n";
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