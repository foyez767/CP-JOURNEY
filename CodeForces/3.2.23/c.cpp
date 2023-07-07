#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, i = 0, ans = 0;    string s;   cin >> n >> s;
    ll j = n - 1;

    while(j - i >= 0){
        if(s[i] != s[j]){
            i++, j--;
        }else break;
        
    }
    ans = j - i + 1;
    cout << ans << "\n";
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