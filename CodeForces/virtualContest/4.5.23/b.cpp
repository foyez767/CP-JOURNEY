#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; string s; cin >> n >> s;

    sort(s.begin(), s.end());

    cout << (int)(s[n - 1] - 'a' + 1) << "\n";
 
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