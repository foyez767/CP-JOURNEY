#include<bits/stdc++.h>
#define ll long long
#define limit 50002
#define m 1000000007
using namespace std;

vector<ll> primes;
void sieve() {
    vector<bool> vec (limit,true);
    vec[0] = vec[1] = false;
    for(ll i = 2; i * i <= limit; i++) {
       if(vec [i]) {
          for(ll j = i*i; j <= limit; j += i)
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
    ll n,cnt = 1;   cin >> n;

    for(ll i = 0; i < primes.size() and primes[i] <= n; i++){
        ll x = legendre(n,primes[i]);
        cnt = ((cnt % m) * ((x+1) % m)) % m;
    }
    cout << cnt << "\n";
    
 
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    sieve();
    cin >> t;
    for(ll i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}