#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin >> s;

    sort(s.begin(), s.end());

    string st = s;

    reverse(s.begin(), s.end());

    if(s == st) cout << -1 << "\n";
    else cout << st << "\n";
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