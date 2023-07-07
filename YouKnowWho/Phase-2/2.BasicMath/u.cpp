#include<bits/stdc++.h>
#define ll long long
#define m 1000000007
#define Limit 50002
using namespace std;

vector<ll> SPF(Limit,0);

void smallestPF(){
    for(ll i = 2; i <= Limit; i++) SPF[i] = i;  

    for(ll i = 2; i * i <= Limit; i++){
        if(SPF[i] == i){
            for(ll j = i*i; j <= Limit; j += i)
                SPF[j] = i;
        }
    }
}

void solve(){
    ll n,ans = 1;   cin >> n;
    vector<ll> cnt(n + 1, 0);

    if(n == 0){
        cout << 1 << "\n";
        return;
    }
    for(ll i = n; i >= 1; i--){
        ll y = i;
        while(y != 1){
            ll x = SPF[y];
            cnt[x] ++;
            y /= x;
        }
    }

    for(ll i = 1; i <= n; i++){
        if(cnt[i] != 0)
            ans = ((ans % m) * ((cnt[i]+1) % m )) % m;
    }
    cout << ans << "\n";
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    smallestPF();

    cin >> t;
    for(ll i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}