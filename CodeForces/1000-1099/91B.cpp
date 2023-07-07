#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;   cin >> s;
    ll fr = 0, sev = 0;
    for(ll i = 0; i < s.length(); i++){
        if(s[i] == '4') fr++;
        else if(s[i] == '7') sev++;
    }

    if(fr ==0 and sev == 0) cout << -1 << "\n";
    else if(fr >= sev) cout << 4 << "\n";
    else cout << 7 << "\n";
 
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    // cin >> t;
    for(ll i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}