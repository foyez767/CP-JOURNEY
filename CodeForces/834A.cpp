#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;   cin >> s;
    ll batti = 0;

    for(ll i = 0; i < s.length()-1; i++){
        if(s[i] == 'Y' and s[i+1] == 'e')
            batti = 1;
        else if(s[i] == 'e' and s[i+1] =='s')
            batti = 1;
        else if(s[i] == 's' and s[i+1] == 'Y')
            batti = 1;
        else{
            cout << "NO\n";
            return;
        }
    }

    if(s.length() == 1 and (s[0]=='Y' or s[0]=='e' or s[0]=='s')) cout<< "YES\n";
    else if (batti) cout<< "YES\n";
    else cout << "NO\n";

   
 
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}