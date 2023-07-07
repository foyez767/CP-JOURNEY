#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 3e4+5;
vector<int> grp[N];
vector<int> cost[N];
bool vis[N];
int d[N];
int node, maxi = -1;

void dfs1(int u, int p){
    vis[u] = true;

    if(d[u] > maxi){
        maxi = d[u];
        node = u;
    }

    for(int i = 0; i < grp[u].size(); i++){
        int k = grp[u][i];
        if(!vis[k]){
            d[k] = d[u] + cost[u][i];
            dfs1(k, u);
        }
    }
}

void dfs2(int u, int p){
    maxi = max(maxi, d[u]);
    
    vis[u] = true;

    for(int i = 0; i < grp[u].size(); i++){
        int k = grp[u][i];

        if(!vis[k]){
            d[k] = d[u] + cost[u][i];
            dfs2(k, u);
        }
    }
}

void solve(){
    int n;   cin >> n;

    for(int i = 1; i < n; i++){
        int u, v, w; cin >> u >> v >> w;
        u++, v++;
        grp[u].push_back(v);
        grp[v].push_back(u);
        cost[u].push_back(w);
        cost[v].push_back(w);
    }

    dfs1(1, 0);

    memset(d, 0, sizeof(d));
    memset(vis, 0, sizeof(vis));

    maxi = 0;
    dfs2(node, 0);

    cout << maxi << "\n";

    memset(d, 0, sizeof(d));
    memset(vis, false, sizeof(vis));

    for(int i = 1; i <= n; i++) grp[i].clear();
    for(int i = 1; i <= n; i++) cost[i].clear();
    node = 0, maxi = -1;
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case " << i << ": ";
        solve();
    }
    
    return 0;
}