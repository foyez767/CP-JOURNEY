#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 7;
vector<int> indeg(N, 0);
vector<int> grp[N];
bool vis[N];
int ans[N];

void dfs(int u,int p){
    vis[u] = true;

    for(auto v : grp[u]){
        if(!vis[v]){
            dfs(v, u);
        }
    }

    if(indeg[u] == 0){
        ans[u] = 0;
        ans[p]++;
    }
    else{
        ans[p] += ans[u] + 1;
    }
}

void solve(){
    int n;  cin >> n;

    for(int i = 2; i <= n; i++){
        int u; cin >> u;
        indeg[u]++;
        grp[u].push_back(i);
    }
 
    dfs(1, 0);

    for(int i = 1; i <= n; i++) cout << ans[i] << " "; cout << "\n";
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