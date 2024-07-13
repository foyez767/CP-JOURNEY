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
    int n, m; cin >> n >> m;

    int or_all = 0;

    for (int i = 1; i <= m; i++) {
        int l, r, x; cin >> l >> r >> x;
        or_all |= x;
    }

    cout << (pow_mod(2, n - 1, mod) * or_all) % mod << "\n";
 
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