#include<bits/stdc++.h>
#define ll long long
#define limit 100005
#define m 10000019
using namespace std;

vector<ll>primes;

long long multiplication(long long a, long long b){
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

long long pow_mod(long long x,long long n){
    x %= m;
    long long res = 1LL;
    while (n > 0) {
        if (n & 1) res = multiplication(res , x);
        x = multiplication(x, x);
        n >>= 1;
    }
    return res;
}

void sieve() {
    vector<bool>vec(limit,true);
   vec[0] = vec[1] = false;
   for(ll i = 2; i * i <= limit; i++) {
       if(vec [i]) {
          for(ll j = i*i; j <= limit; j+=i)
              vec [j] = false;
        }
    }

    for(ll i = 2; i <= limit; i++){
        if(vec[i])
            primes.push_back(i);
    }
}

ll legendre(ll n, ll p){
    ll ans = 0;
    while(n){
        ans += n/p;
        n /= p;
    }
return ans;
}

void solve(){
    ll n,t,ans = 1;   cin >> n >> t;

    for(ll i = 0; i < primes.size() and primes[i] <= n; i++){
        ll x = legendre(n,primes[i]);
        x /= t;
        if(x == 0) continue;
        ll y = pow_mod(primes[i],x);
        ans = ((ans % m) * (y % m) ) % m;
    }
    if(ans == 1) cout << -1 << "\n";
    else cout << ans << "\n";

 
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    sieve();
    cin >> t;
    for(ll i = 1; i <= t; i++){
        cout << "Case " << i <<": ";
        solve();
    }
    
    return 0;
}