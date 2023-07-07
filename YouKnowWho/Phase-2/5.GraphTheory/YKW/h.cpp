#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 7;
vector<ll> grp[N],cost[N];
ll dis[N],dis1[N], node, maxi = -1, node1 = 0;
bool vis[N];

void dfs(int u, int p){
    vis[u] = true;

    if(dis[u] > maxi){
        node = u;
        maxi = dis[u];
    }

    for(int i = 0; i < grp[u].size(); i++){
        int v = grp[u][i];
        if(!vis[v] and v != u){
            dis[v] = dis[u] + cost[u][i];
            dfs(v, u);
        }
    }
}

void solve(){
    int n;  cin >> n;

    for(int i = 1; i < n; i++){
        int u, v, w; cin >> u >> v >> w;
        grp[u].push_back(v);
        grp[v].push_back(u);

        cost[u].push_back(w);
        cost[v].push_back(w);
    }

    dfs(1, 0);
    node1 = node, node = 0,maxi = 0;
    memset(dis, 0, sizeof(dis));
    memset(vis, false, sizeof(vis));

    dfs(node1, 0);

    for(int i = 1; i <= n; i++){
        dis1[i] = dis[i];
    }

    memset(dis, 0, sizeof(dis));
    memset(vis, 0, sizeof(vis));

    maxi = 0;
    dfs(node, 0);

    for(int i = 1; i <= n; i++){
        cout << max(dis[i],dis1[i]) << " ";
    }
    cout << "\n";

    memset(dis, 0, sizeof(dis));
    memset(vis, false, sizeof(vis));
    memset(dis1, 0, sizeof(dis1));
    for(int i = 1; i <= n; i++) grp[i].clear();
    for(int i = 1; i <= n; i++) cost[i].clear();
    maxi = -1, node = 0, node1 = 0;
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}