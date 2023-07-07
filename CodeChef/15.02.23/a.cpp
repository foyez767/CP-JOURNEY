#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll x, y;    cin >> x >> y;
    
    if(y > x) cout << "YES\n";
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