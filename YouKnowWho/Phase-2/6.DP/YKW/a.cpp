#include<bits/stdc++.h>
#define inf 1e8
#define ll long long
using namespace std;

const int N = 1e5 + 7;
ll dp[N],ht[N];
int n;

ll minCost(ll i){
    if(i == 1) return 0;

    if(dp[i] != -1)
        return dp[i];

    ll ans = 0;
    ans = minCost(i - 1) + abs(ht[i] - ht[i -1]);
        
    if(i - 2 >= 1){
        ll ans2 = minCost(i - 2) + abs(ht[i] - ht[i - 2]);
        ans = min(ans, ans2);
        dp[i] = ans;
    }else{
        dp[i] = ans;
    }

return dp[i];
}

void solve(){
    memset(dp, -1, sizeof(dp));
    cin >> n;

    for(int i = 1; i <= n; i++) cin >> ht[i];

    cout << minCost(n) << "\n";

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