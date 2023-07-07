#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime(ll n){
    for(ll i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }
return true;
}

void solve(){
    ll n ;  cin >> n;

    if(isPrime(n)) cout << 1 << "\n";
    else if(n % 2 == 0) cout << 2 << "\n";
    else if(n % 2 == 1 and isPrime(n-2) == true) cout << 2 << "\n";
    else cout << 3 << "\n";
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