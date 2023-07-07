#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n1,n2,blu = 0,re = 0;   cin >> n1 >> n2;
    string s1,s2;   cin >> s1 >> s2;

    for(ll i = 0; i < n1-1; i++){
        if(s1[i]=='B' and s1[i+1] == 'B')
            blu++;
        if(s1[i]=='R' and s1[i+1] == 'R')
            re++;
    }

     for(ll i = 0; i < n2-1; i++){
        if(s2[i]=='B' and s2[i+1] == 'B')
            blu++;
        if(s2[i]=='R' and s2[i+1] == 'R')
            re++;
    }

    if(blu == 0 and re == 0) cout << "YES\n";
    else if((blu == 0 and re == 1) or (re == 0 and blu == 1)){
        if(s1[n1-1] == 'B' and s2[n2-1] == 'R') cout << "YES\n";
        else if(s1[n1-1] == 'R' and s2[n2-1] == 'B') cout << "YES\n";
        else cout << "NO\n";
    }else cout << "NO\n";
 
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