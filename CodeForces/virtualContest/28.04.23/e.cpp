#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; string s; cin >> n >> s;

//length is odd, then it is not possible since s[i] = s[n - i + 1] match for middle element
    if(n % 2) {
        cout << -1 << "\n";
        return;
    }
//if any character exist more than n / 2 times , that means no matter how we swap, there exist at least one index
//where s[i] == s[n -i + 1] is true
    map<char,int> cnt;

    for(auto c : s) cnt[c]++;

    for(auto m : cnt) {
        if(m.second > n / 2) {
            cout << "-1\n";
            return;
        }
    }

    cnt.clear();

    int ttl = 0;
    /*
        ttl = total number of pairs where s[i] = s[n - i - 1]
        cnt[c] = maximum no of pairs for all characters where s[i] = s[n - i - 1]
        in each operation we can decrease cnt[c] by 1
        or, in each operation we can decrease ttl by 2 [if we do the swap operation only in first half]
        so ans >= ttl / 2, or ans >= maximum (cnt[c])
    */

    for(int i = 0; i < n/2 ; i++) {
        if(s[i] == s[n - i - 1]) {
            cnt[s[i]]++;
            ttl++;
        }
    }

    int ans = 0;
    for(auto c : cnt) {
        ans = max(ans, c.second);
    }

    cout << max((ttl + 1) / 2, ans) << "\n";
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