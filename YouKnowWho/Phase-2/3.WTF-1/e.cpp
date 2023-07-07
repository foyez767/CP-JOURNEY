#include<bits/stdc++.h>
#define ll long long
#define N (ll)1e7
#define limit 1e9
using namespace std;

vector<ll>spf(N+1,true);
vector<ll>cnt(limit+1,0);

void smallestPF(){
    for(ll i = 1; i <= N ; i++) spf[i] = i;
    for(ll i = 2; i * i <= N; i++){
        if(spf[i] == i){
            for(ll j = i * i ; j <= N; j += i)
                spf[j] = i;
        }
    }
}

void solve(){
    ll n;   cin >> n;
    vector<ll>ele(n,0);
    for(auto &x : ele)  cin >> x;

    for(ll i = 0; i < n; i++){
        ll x = ele[i],batti = 0;
        while(x != 1){
             
            x /= spf[x];
        }
    }

    


 
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