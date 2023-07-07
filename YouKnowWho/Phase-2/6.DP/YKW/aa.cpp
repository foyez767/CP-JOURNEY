// given a rooted tree with n nodes and e edges, find the size of all subtree 
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
vector<int> grp[N];
int size[N];


void dfs(int u, int p){
    size[u] = 1;

    for(auto v : grp[u]){
        if(v != p){
            dfs(v, u);
            size[u] += size[v];
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
 
    dfs(1, 0);

    for(int i = 1; i <= n; i++) cout << size[i] << " "; cout << endl;
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