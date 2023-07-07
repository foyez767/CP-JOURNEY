#include<bits/stdc++.h>
using namespace std;

const int N = 103, W = 1e5 + 7;
long long val[N],weight[N], dp[N][W];
int n, w;

long long cal(int i, int weigh){
    if(i == n + 1) return 0;
    if(dp[i][weigh] != -1){
        return dp[i][weigh];
    }
    long long ans = cal(i + 1, weigh);

    if(weigh + weight[i] <= w)
        ans = max(ans, cal(i + 1, weigh + weight[i]) + val[i]);

    dp[i][weigh] = ans;
return ans;
}
void solve(){
    cin >> n >> w;
    for(int i = 1; i <= n; i++){
        cin >> weight[i] >> val[i];
    }

    memset(dp, -1, sizeof(dp));

    cout << cal(1, 0) << "\n";
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