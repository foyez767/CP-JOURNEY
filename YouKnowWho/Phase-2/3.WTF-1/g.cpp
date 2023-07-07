#include<bits/stdc++.h>
#define ll long long
#define N 1e7
using namespace std;
vector<bool>vec(N+1,true);
vector<ll>primes;

void sieve() {
   vec[0] = vec[1] = false;
   for(ll i = 2; i * i <= N; i++) {
       if(vec [i]) {
          for(ll j = i*i; j <= N; j+=i)
              vec [j] = false;
        }
    }

    for(ll i = 1; i < vec.size(); i++){
        if(vec[i])
            primes.push_back(i);
    }
}

bool isPrime(ll n){
    for(ll i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }
return true;
}

void solve(){
    ll n;   cin >> n;
    
    // if(isPrime(n)){
    //     cout << 1 << "\n";
    //     cout << n << "\n";
    // }
    // else if(isPrime(n-2)){
    //     cout << 2 << "\n";
    //     cout << 2 << " " << n-2 << "\n";
    // }else{
    //     n-=3;
    //     for(ll i = 0; i < primes.size(); i++){
    //         if(isPrime(n-primes[i])){
    //             cout << 3 << "\n";
    //             cout << 3 << " " << primes[i] << " " << n - primes[i] << "\n";
    //             return;
    //         }
    //     }
    // }
    cout<< boolalpha;
    cout << isPrime(1789);
 
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    sieve();
    // cin >> t;
    for(ll i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}