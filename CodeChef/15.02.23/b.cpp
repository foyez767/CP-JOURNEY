#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll x, y, z;  cin >> x >> y >> z;

    if(10 * x >= y) cout << y * z << "\n";
    else cout << 10 * x * z << "\n";
 
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