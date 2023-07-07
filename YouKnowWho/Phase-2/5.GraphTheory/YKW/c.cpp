#include<bits/stdc++.h>
using namespace std;

const int N = 205;
vector<int> grp[N];
int col[N];
bool vis[N], ok = true;

void dfs(int u){
    vis[u] = true;

    for(auto v : grp[u]){
        if(!vis[v]){
            col[v] = !col[u];
            dfs(v);
        }
        else{
            if(col[u] == col[v])
                ok = false;
        }
        
    }
}

int main(){
    while(true){
        memset(vis, false, sizeof(vis));
        memset(col, 0, sizeof(col));
        int n ; cin >> n;
        if(n == 0)
            break;

        ok = true;

        int e;  cin >> e;

        for(int i = 1; i <= e; i++){
            int u, v; cin >> u >> v;
            grp[u].push_back(v);
            grp[v].push_back(u);
        }

        dfs(0);

        if(ok) cout << "BICOLORABLE.\n";
        else cout << "NOT BICOLORABLE.\n";

        for(int i = 0; i < n; i++) grp[i].clear();
    }

    return 0;
}