#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 7, mod = 1e9 + 7;
vector<int> grp[N];
ll dp[N][2];
// 0 black, 1 = white
void dfs(int u, int p){
    dp[u][0] = 1;
    dp[u][1] = 1;

    for(auto v : grp[u]){
        if(v != p){
            dfs(v, u);
            dp[u][0] = (dp[u][0] % mod * dp[v][1] % mod) % mod;
            dp[u][1] = (dp[u][1] * (dp[v][0] + dp[v][1]) % mod ) % mod;
        }
    }
}

void solve(){
    int n; cin >> n;

    for(int i = 1; i < n; i++){
        int u , v; cin >> u >> v;
        grp[u].push_back(v);
        grp[v].push_back(u);
    }

    dfs(1, 0);
    cout << (dp[1][0] + dp[1][1]) % mod << "\n";
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