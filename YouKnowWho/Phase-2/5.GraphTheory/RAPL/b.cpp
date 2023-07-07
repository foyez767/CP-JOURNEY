#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 2e5 + 7;
vector<int> grp[N];
bool vis[N];
vector<int> ans;

void dfs(int u){
    vis[u] = true;

    for(auto v : grp[u]){
        if(!vis[v]){
            dfs(v);
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
            ans.push_back(i);
            dfs(i);
        }
    }

    cout << ans.size() - 1 << "\n";
    for(int i = 1; i < ans.size(); i++){
        cout << ans[i - 1] << " " << ans[i] << "\n";
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