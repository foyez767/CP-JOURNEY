#include<bits/stdc++.h>
#define ll long long
#define inf 1e9
using namespace std;

void solve(){
    int n, x; cin >> n >> x;
    vector<int> coins(n, 0);

    for(auto &c : coins) cin >> c;

    int dp[x + 1]{};
    dp[0] = 0;
    
    for(int i = 1; i <= x; i++){
        dp[i] = inf;

        for(auto c : coins){
            if(i - c >= 0){
                dp[i] = min(dp[i], dp[i - c] + 1);
            }
        }
    }

    ll ans = dp[x];
    if(ans >= inf) cout << -1 << "\n";
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