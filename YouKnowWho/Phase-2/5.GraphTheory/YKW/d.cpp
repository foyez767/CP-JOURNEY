#include<bits/stdc++.h>
using namespace std;

const int N = 1005;
vector<int> grp[N];
bool vis[N];
int dis[N];

void dfs(int u, int p){
    vis[u] = true;
    dis[u] = dis[p] + 1;

    for(auto v : grp[u]){
        if(!vis[v]){
            dfs(v, u);
        }
    }
}

int main(){

    int n, tc = 0;

    while(true){
        cin >> n;
        if(n == 0)
            break;
        vector<int> vec;

    for(int i = 1; i <= n; i++){
        int u; cin >> u;
        vec.push_back(u);
    }

    for(int i = 0; i < vec.size() -1 ; i+=2){
        grp[vec[i]].push_back(vec[i+1]);
        grp[vec[i+1]].push_back(vec[i]);
    }

    int x , ttl;

    while(true){
        memset(vis, 0, sizeof(vis));
        memset(dis, 0, sizeof(dis));
        cin >> x >> ttl;
        if(x == 0 and ttl == 0)
            break;
        
        dfs(x, 0);

        int cnt = 0;
        for(int i = 1; i <= N; i++){
            if(dis[i] > ttl){
                cnt++;
            }
        }
        cout << "Case " << ++ tc << ": " << cnt << " nodes not reachable from node " << x << " with TTL = " << ttl << ".\n";
    }
    grp->clear();
    }
    return 0;
}