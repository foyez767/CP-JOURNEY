#include<bits/stdc++.h>
using namespace std;

const int N = 105;
vector<int> grp[N];
bool vis[N];
int cst = 0,ttl = 0,cost[N][N];

void dfs(int u){
    vis[u] = true;

    int cnt = 0;
    for(auto v : grp[u]){
        if(!vis[v]){
            vis[v] = true;
            cnt = 1;
            cst += cost[u][v];
            dfs(v);
        }
    }

    if(cnt == 0){
        cst += cost[u][1];
    }
}

void solve(){
    int n;  cin >> n;

    for(int i = 1; i <= n; i++){
        int u, v, c ; cin >> u >> v >> c;
        grp[u].push_back(v);
        grp[v].push_back(u);
        cost[u][v] = 0;
        cost[v][u] = c;
        ttl += c;
    }

    dfs(1);

    cout << min(cst, ttl - cst) << "\n";
 
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