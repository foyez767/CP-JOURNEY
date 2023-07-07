#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n,cnt = 0, x = 0;string s;  cin >> n >> s;
    ll p = count(s.begin(),s.end(),'+');
    ll e = count(s.begin(),s.end(),'-');

    if(e == 0 and p == 0){
        cout << n << "\n";
        return;
    }

    for(ll i = 0; i < s.length(); i++){
        if(s[i] == '-') e = 1;
        else if(s[i] == '+') p = 1;
        else if(s[i] == '0') x = 1;

        if(e == 1 and p == 1 and x == 1){
            cnt++;
        }
    }
 
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