#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 7;
vector<int> grp[N];
vector<bool> vis (N, false);

void dfs(int u){
    vis[u] = true;

    for(auto v : grp[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
}

void solve(){
    int n, e;   cin >> n >> e;

    for(int i = 1; i <= e; i++){
        int u, v;  cin >> u >> v;
        grp[u].push_back(v);
        grp[v].push_back(u);
    }

    vector<int> ans;

    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            ans.push_back(i);
            dfs(i);
        }
    }
    
    cout << ans.size() - 1 << "\n";

    for(int i = 0 ; i < ans.size() - 1; i++){
        cout << ans[i] << " " << ans[i + 1] << "\n";
    }
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    // cin >> t;
    for(ll i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}