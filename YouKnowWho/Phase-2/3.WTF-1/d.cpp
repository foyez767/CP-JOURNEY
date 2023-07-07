#include<bits/stdc++.h>
#define ll long long
#define limit (ll)1e7
#define p 5
using namespace std;

vector<ll>vec(limit+1,0),fact(limit+1,0);

ll legendre(ll n){
    ll ans = 0;
    while(n){
        ans += n/p;
        n /= p;
    }
return ans;
}

void solve(){
    for(ll i = 0; i <= limit; i++){
        fact[i] = legendre(i);
    }

    ll n;   cin >> n;
    ll cnt = 0;
    vector<ll> ans;
    for(ll i = 0; i <= limit; i++){
        if(fact[i] == n){
            cnt++;
            ans.push_back(i);
        }
    }

    cout << cnt << "\n";
    for(auto v: ans) cout << v << " ";
    cout << "\n";
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