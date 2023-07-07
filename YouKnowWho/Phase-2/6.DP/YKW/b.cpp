#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 7;
ll dp[N], x, k, ht[N];

ll minCost(int n){
    if(n == 1) return 0;

    if(dp[n] != -1)
        return dp[n];

    ll ans = INT64_MAX;
    for(int i = 1; i <= k; i++){
        if(n - i >= 1){
            ll ans2 = minCost(n - i) + abs(ht[n] - ht[n - i]);
            ans = min(ans, ans2);
        }
    }
    dp[n] = ans;
return dp[n];
}

void solve(){
    memset(dp, -1, sizeof(dp));
    cin >> x >> k;

    for(int i = 1; i <= x; i++) cin >> ht[i];

    cout << minCost(x) << "\n";
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