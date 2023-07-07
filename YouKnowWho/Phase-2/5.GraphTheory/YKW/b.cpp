#include<bits/stdc++.h>
using namespace std;

const int N = 103;
vector<int>grp[N], strt(N,0),fish(N,0);
bool vis[N];
int t = 0;

void dfs(int u){
    vis[u] = true;
    strt[u] = ++t;

    for(auto v : grp[u]){
        if(!vis[v]){
            dfs(v);
        }
    }

    fish[u] = ++t;
}

int main(){
    int n,id, u, k;     cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> id >> k;
        for(int j = 1; j <= k; j++){
            cin >> u;
            grp[id].push_back(u);
        }
    }

    for(int i = 1; i <= n; i++){
        if(!vis[i])
            dfs(i);
    }

    for(int i = 1; i <= n; i++){
        cout << i << " " << strt[i] << " " << fish[i] << "\n";
    }

    return 0;
}