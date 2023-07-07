#include<bits/stdc++.h>
#define limit 1e7
#define ll long long
using namespace std;

vector<bool>vec(limit+1,true);
vector<ll>primes;

void sieve() {
   vec[0] = vec[1] = false;
   for(ll i = 2; i * i <= limit; i++) {
       if(vec [i]) {
          for(ll j = i*i; j <= limit; j+=i)
              vec [j] = false;
        }
    }

    for(ll i = 0; i < vec.size(); i++){
        if(vec[i])
            primes.push_back(i);
    }
}

void solve(){
    ll n;   cin >> n;
    for(ll i = 1; i <= n; i++)
        cout << primes[i-1] << " ";
    cout << endl;
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