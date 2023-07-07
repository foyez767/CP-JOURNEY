#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 103, W = 1e5 + 7;
int n, w;
ll weight[N],val[N], dp[N][W];

ll maxVal(int i, int weigh){
    if(i == n + 1) return 0;
    if(dp[i][weigh] != -1)
        return dp[i][weigh];

    ll ans = maxVal(i + 1, weigh);
    if(weigh + weight[i] <= w)
        ans = max(ans, maxVal(i + 1, weight[i]+ weigh) + val[i]);
    
    dp[i][weigh]= ans;
return ans;
}

void solve(){
    memset(dp, -1, sizeof(dp));
    cin >> n >> w;

    for(int i = 1; i <= n; i++){
        cin >> weight[i] >> val[i];
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