#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int M = 1e5 + 7;
vector<bool> vec(M, true);
vector<int> primes;

const int N = 2e5 + 7;
int spf[N];

void smallestPF(){
    for(ll i = 1; i <= N ; i++) spf[i] = i;
    for(ll i = 2; i * i <= N; i++){
        if(spf[i] == i){
            for(ll j = i * i ; j <= N; j += i)
                spf[j] = i;
        }
    }
}

void sieve() {
    vec[0] = vec[1] = false;
    for(int i = 2; i * i <= M; i++) {
        if(vec [i]) {
            for(int j = i*i; j <= M; j += i)
                vec [j] = false;
        }
    }

    for(int i = 1; i <= M; i++){
        if(vec[i])
            primes.push_back(i);
    }
}

void solve(){
    ll n, m, mod; cin >> n >> m >> mod;
    ll nn = n, mm = m;
    //npf , mpf = prime factiorization of n! and m respectively
    vector<ll> npf(N+5, 0);

// prime factorization of n!
    for(int i = 1; i <= n; i++){
        int x = i;
        while(x != 1){
            npf[spf[x]]++;
            x /= spf[x];
        }
    }
    map<ll,ll> mpf;

    bool batti = true;
// prime factorization of m
    for(auto p : primes){
        if(m % p == 0){
            while(m % p == 0){
                mpf[p]++;
                m /= p;
            }
        }
        if(m == 1){
            break;
        }
    }

    if(m > M) batti = false;

    ll  mini = 1e17;     // if it is possible then maximum how many times i can divide n! by m

    for(auto v : mpf){
        if(v.first >= N){
            batti = false;
            break;
        }else if(v.second > 0 and npf[v.first] < v.second){
            batti = false;
            break;
        }else if(v.second > 0 and npf[v.first] > 0 and npf[v.first] >= v.second){
            ll mx = max(v.second, npf[v.first]);
            ll my = min(v.second, npf[v.first]);
            ll y = mx / my;

            if(y < mini){
                mini = y;
            }
        }
    }

    if(batti){
        for(auto v : mpf){
            if(npf[v.first] > 0){
                npf[v.first] = npf[v.first] - (v.second * mini);
            }
        }
    }

    // for(ll i = 1; i <= nn; i++) cout << i << " " << mp[i] <<endl;

    ll ans = 1;

    for(ll i = 1; i <= nn; i++){
        if(npf[i] > 0){
            ll x = (ll)pow(i, npf[i]);
            ans = (ans  * (x  % mod)) % mod;
        }
    }

    cout << (ans % mod) << "\n";

    npf.clear(), mpf.clear();
 
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    sieve();
    smallestPF();
    cin >> t;
    for(ll i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}