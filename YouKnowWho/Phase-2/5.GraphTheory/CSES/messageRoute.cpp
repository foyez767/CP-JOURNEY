#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 9;
vector<int> grp[N],dis(N,0),par(N,0);
bool vis[N];

void solve(){
    int n , m , x;     cin >> n >> m;
    x = n;

    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        grp[u].push_back(v);
        grp[v].push_back(u);
    }

    queue<int> q;
    q.push(1), vis[1] = true, dis[1] = 1;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(auto v : grp[u]){
            if(!vis[v]){
                vis[v] = true;
                dis[v] = dis[u] + 1;
                par[v] = u;
                q.push(v);
            }
        }
    }

    bool ok = vis[n];

    if(!ok){
        cout << "IMPOSSIBLE\n";
        return;
    }

    vector<int> path;
    path.push_back(n);

    while(n != 1){
        path.push_back(par[n]);
        n = par[n];
    }
 
    reverse(path.begin(),path.end());

    cout << dis[x] << "\n";
    
    for(auto p : path) cout << p << " "; cout << "\n";

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