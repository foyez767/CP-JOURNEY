#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 100;
vector<int> grp[N], clr(N, 0);
bool vis[N], batti = true;

void dfs(int u){
    vis[u] = true;

    for(auto v : grp[u]){
        if(!vis[v]){
            clr[v] = !clr[u];
            dfs(v);
        }else if(clr[v] == clr[u]){
            batti = false;
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