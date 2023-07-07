#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll a, b, c,x,y;     cin >> a >> b >> c;
    x = b - min(b,c);
    y = c -  min(b,c);

    if(a - max(x,y) > 0) cout << "YES\n";
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