#include<bits/stdc++.h>
using namespace std;

const int N = 1e4 + 7;
vector<int> grp[N];
bool vis[N];
int maxi = 0, node = 0,dis[N];

void dfs1(int u,int p){
    vis[u] = true;
    dis[u] = dis[p] + 1;

    if(dis[u] > maxi){
        maxi = dis[u];
        node = u;
    }

    for(auto v : grp[u]){
        if(!vis[v]){
            dfs1(v, u);
        }
    }
}

void dfs2(int u, int p){
    vis[u] = true;
    dis[u] = dis[p] + 1;

    maxi = max(maxi, dis[u] - 1);

    for(auto v : grp[u]){
        if(!vis[v]){
            dfs2(v, u);
        }
    }
}

void solve(){
    int n; cin >> n;

    for(int i = 1; i < n; i++){
        int u, v; cin >> u >> v;
        grp[u].push_back(v);
        grp[v].push_back(u);
    }
    
    dfs1(1, 0);

    maxi = 0;
    memset(dis, 0, sizeof(dis));
    memset(vis, false, sizeof(vis));

    dfs2(node, 0);

    cout << maxi << "\n";
 
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