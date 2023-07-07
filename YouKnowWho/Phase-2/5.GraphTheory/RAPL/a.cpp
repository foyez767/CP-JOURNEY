#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
vector<int> grp[N];
bool vis[N],ok = false;

void dfs(int u, int p){
    vis[u] = true;

    for(auto v : grp[u]){
        if(!vis[v]){
            dfs(v, u);
        }else if(v != p){
            ok = true;
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

   dfs(1, 0);

   for(int i = 1; i <= n; i++){
        if(!vis[i]){
            ok = true;
        }
   }

   if(ok) cout << "NO\n";
   else cout << "YES\n";
 
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