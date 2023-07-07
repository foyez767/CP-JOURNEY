#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 2005;
vector<int> grp[N];
int col[N];
bool vis[N], ok = true;

void dfs(int u){
    vis[u] = true;

    for(auto v : grp[u]){
        if(!vis[v]){
            col[v] = !col[u];
            dfs(v);
        }else{
            if(col[v] == col[u])
                ok = false;
        }
    }
}


void solve(){
    int n, e;   cin >> n >> e;

    for(int i = 1; i <= e; i++){
        int u, v; cin >> u >> v;
        grp[u].push_back(v);
        grp[v].push_back(u);
    }

    ok = true;
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            dfs(i);
        }
    }

    if(ok) cout << "No suspicious bugs found!\n";
    else cout << "Suspicious bugs found!\n";

    memset(vis, false, sizeof(vis));
    memset(col, 0, sizeof(col));
    for(int i = 1; i <= n; i++) grp[i].clear();
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Scenario #" << i << ": \n";
        solve();
    }
    
    return 0;
}