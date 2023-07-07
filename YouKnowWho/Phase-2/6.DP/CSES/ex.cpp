#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
const int N = 1003,X = 1e4 + 4;
int n, x, cost[N],val[N];
int dp[N][X];
 
int maxVal(int i, int cst){
    if(i == n + 1){
        return 0;
    }
    if(dp[i][cst] != -1){
        return dp[i][cst];
    }
    int ans = maxVal(i + 1, cst);
    if(cst + cost[i] <= x)
        ans = max(ans, maxVal(i + 1, cst + cost[i]) + val[i]);
    dp[i][cst] = ans;
 
return dp[i][cst];
}
void solve(){
    memset(dp, -1, sizeof(dp));
    cin >> n >> x;
    
    for(int i = 1; i <= n; i++){
        cin >> cost[i];
    }
    for(int i = 1; i <= n; i++){
        cin >> val[i];
    }
 
    cout << maxVal(1, 0) << "\n";
 
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