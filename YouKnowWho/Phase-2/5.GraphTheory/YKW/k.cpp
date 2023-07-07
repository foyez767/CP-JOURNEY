#include<bits/stdc++.h>
using namespace std;

const int N = 105;
vector<int> grp[N];
int dis[N],dis2[N];
bool vis[N],vis2[N];

void bfs(int s){
    queue<int> q;
    q.push(s);
    vis[s] = true;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(auto v : grp[u]){
            if(!vis[v]){
                vis[v] = true;
                dis[v] = dis[u] + 1;
                q.push(v);
            }
        }
    }

}

void bfs2(int f){
    queue<int> q;
    q.push(f);
    vis2[f] = true;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(auto v : grp[u]){
            if(!vis2[v]){
                dis2[v] = dis2[u] + 1;
                vis2[v] = true;
                q.push(v);
            }
        }
    }
}

void solve(){
    int n, e;   cin >> n >> e;

    for(int i = 1; i <= e; i++){
        int u, v;   cin >> u >> v;
        grp[u].push_back(v);
        grp[v].push_back(u);
    }

    int strt, finsh;   cin >> strt >> finsh;

    bfs(strt);
    bfs2(finsh);

    int ans = 0;

    for(int i = 0; i < n; i++){
        ans = max(ans, dis[i] + dis2[i]);
    }

    cout << ans << "\n";

    memset(vis, false, sizeof(vis));
    memset(vis2, false, sizeof(vis2));
    memset(dis, 0, sizeof(dis));
    memset(dis2, 0, sizeof(dis2));
    for(int i = 0; i < n; i++) grp[i].clear();
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case " << i <<": ";
        solve();
    }
    
    return 0;
}