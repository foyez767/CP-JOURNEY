#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, k;    cin >> n >> k;
    if(k == 1 and n % 2 == 1) cout << "YES\n";
    else if (n == k * k) cout << "YES\n";
    else if(n > k * k and (n - (k-1)*(k-1)) % 2 == 1) cout << "YES\n";
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