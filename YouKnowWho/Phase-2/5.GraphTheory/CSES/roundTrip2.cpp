#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 7;
vector<int> grp[N], par(N,0);
bool vis[N], ok = false,batti = false;
int node = 0, pr = 0;

void dfs(int u, int p){
    if(batti)
        return;

    vis[u] = true;
    par[u] = p;

    for(auto v : grp[u]){
        if(!vis[v]){
            dfs(v, u);
        }else if(v != p){
            ok = true;
            node = v, pr = u;
            batti = true;
        }
    }
}

void solve(){
    int n, m;   cin >> n >> m;

    for(int i = 1; i <= m; i++){
        int u, v;   cin >> u >> v;
        grp[u].push_back(v);
        grp[v].push_back(u);
    }

    dfs(1, 0);

    if(!ok) cout << "IMPOSSIBLE\n";
    else{
        vector<int> ans;
        ans.push_back(node);
        int x = node;

        while(node != pr){
            ans.push_back(par[node]);
            node = par[node];
        }
        ans.push_back(x);
        cout << ans.size() << "\n";
        for(auto v : ans) cout << v << " "; cout << "\n";
    }
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