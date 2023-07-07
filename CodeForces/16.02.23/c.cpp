#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n,cnt = 0,x = 0;   cin >> n;
    ll tea[n] {},ablty [n]{};
    for(auto &x : tea) cin >> x;
    for(auto &x : ablty) cin >> x;

    ll cnter[n] {};
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j <= i; j++){
            cnter[i] += min(tea[j],ablty[i]);
            tea[j] -= min(tea[j],ablty[i]);
        }
    }

    for(ll i = 0; i < n; i++) cout << cnter[i] << " "; cout << "\n";
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