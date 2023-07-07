#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n , e;
const int N = 1e5 + 7;
vector<int> grp[N];
int dp[N];

int lngstPath(int i){
    if(dp[i] != -1){
        return dp[i];
    }
    int ans = 0;
    for(auto v : grp[i]){
        ans = max(ans, 1 + lngstPath(v));
    }
    dp[i] = ans;
return dp[i];
}

void solve(){
    cin >> n >> e;

    for(int i = 1; i <= e; i++){
        int u, v; cin >> u >> v;
        grp[u].push_back(v);
    }

    memset(dp, -1, sizeof dp);
    int ans = 0;
    for(int i = 1; i <= n ; i++){
        ans = max(ans, lngstPath(i));
    }
    cout << ans << "\n";
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