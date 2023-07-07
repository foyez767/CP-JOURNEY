#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 2e5 + 7;
vector<int> grp[N],col(N, 0);
bool vis[N], ok = true;

void dfs(int u){
    vis[u] = true;

    for(auto v : grp[u]){
        if(!vis[v]){
            col[v] = !col[u];
            dfs(v);
        }else if(col[v] == col[u]){
            ok = false;
        }
    }
}

void solve(){
    int n, e; cin >> n >> e;

    for(int i = 1; i <= e; i++){
        int u, v; cin >> u >> v;
        grp[u].push_back(v);
        grp[v].push_back(u);
    }

    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            dfs(i);
        }
    }

    if(ok){
        for(int i = 1; i <= n; i++){
            if(col[i] == 0){
                cout << 1 << " ";
            }else cout << 2 << " ";
        }
        cout << "\n";
    }else cout << "IMPOSSIBLE\n";
 
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