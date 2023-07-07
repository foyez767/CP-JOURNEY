#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 1e6 + 7, inf = 1e10;
vector<ll> coins;
ll dp[N];

ll minimum(ll x){
    if(x < 0) return inf ;
    if(x == 0) return 0;
    if(dp[x] != -1){
        return dp[x];
    }
    ll best = inf;
    for(auto c : coins){
        best = min(best, minimum(x - c) + 1);
    }
    dp[x] = best;
return dp[x];
}

void solve(){
    memset(dp, -1, sizeof dp);
    int n, x ; cin >> n >> x;

    for(int i = 1; i <= n; i++){
        int u; cin >> u;
        coins.push_back(u);
    }

    ll ans = minimum(x);

    if(ans >= inf) cout << "-1\n";
    else cout << ans << "\n";
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}