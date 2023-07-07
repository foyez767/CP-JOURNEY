#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 7;
ll swim[N],home[N],bugs[N],dp[N][4];


void solve(){
    int n; cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> swim[i] >> bugs[i] >> home[i];
    }
    
    dp[1][1] = swim[1];
    dp[1][2] = bugs[1];
    dp[1][3] = home[1];

    for(int i = 2; i <= n; i++){
        dp[i][1] = swim[i] + max(dp[i - 1][2], dp[i - 1][3]);
        dp[i][2] = bugs[i] + max(dp[i -1 ][1], dp[i - 1][3]);
        dp[i][3] = home[i] + max(dp[i - 1][1], dp[i - 1][2]);
    }
 
    cout << max(dp[n][1], max(dp[n][2], dp[n][3])) << "\n";
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