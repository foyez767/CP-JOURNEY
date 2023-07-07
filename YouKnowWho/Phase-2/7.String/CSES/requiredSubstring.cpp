#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7; 

long long multiplication(long long a, long long b,long long m){
    long long res = 0;
    a %= m;
    while (b) {
        if (b % 2)
            res = (res + a) % m;

        a = (2 * a) % m;
        b >>= 1;
    }
return res;
}

long long pow_mod(long long x,long long n,long long m){
    x %= m;
    long long res = 1LL;
    while (n > 0) {
        if (n & 1) res = multiplication(res , x, m);
        x = multiplication(x, x, m);
        n >>= 1;
    }
return res;
}

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int m = s.length();

    int ans = pow_mod(26, n - m, mod);

    cout << 2 * ans << "\n";
 
}
 
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}