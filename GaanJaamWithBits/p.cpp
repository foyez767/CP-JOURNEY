#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;

long long pow_mod(long long x,long long n,long long mod){
    if (n == 0)
        return 1;
    long long t = pow_mod(x,n/2,mod);
    if(n % 2 == 0)
        return t * t % mod;
    else
        return (x * t) % mod * t % mod;
}

void solve(){
    int n, k; cin >> n >> k;

    cout << (pow_mod(n, k, mod)) << "\n";
 
}
 
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}