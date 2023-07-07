#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, gc = 0,lc = 0;   cin >> n;
    lc = 2520;
    // // lc = 
    // for(ll i = 4; i <= 10; i++){
    //     gc = __gcd(i,gc);
    //     // lc = i * lc;
    //     lc = (lc * i) /__gcd(i,gc);
    // }
    // // lc = lc / gc;

    cout << n / lc << "\n";
 
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