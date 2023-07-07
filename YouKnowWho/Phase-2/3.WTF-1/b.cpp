#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string a, b;    cin >> a >> b;

    if(a == b) cout << a << "\n";
    else cout << 1 << "\n";
 
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