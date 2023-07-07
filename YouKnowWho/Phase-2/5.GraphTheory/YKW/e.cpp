#include<bits/stdc++.h>
#define inf 10000000
using namespace std;

const int N = 2e5 + 7;
vector<int> grp[N], cat(N,0),parCat(N,0),deg(N,0);
bool vis[N];

void solve(){
    int n, m;   cin >> n >> m;

    for(int i = 1; i <= n; i++){
        cin >> cat[i];
    }
    
    for(int i = 1; i < n; i++){
        int u, v;  cin >> u >> v;
        grp[u].push_back(v);
        grp[v].push_back(u);
        deg[u]++, deg[v]++;
    }

    int ans = 0;

    queue<int> q;
    q.push(1), vis[1] = true;

    if(cat[1] > m) parCat[1] = inf;
    else parCat[1] = cat[1];


    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(auto v : grp[u]){
            if(!vis[v]){
                vis[v] = true;
                q.push(v);

                if(parCat[u] == inf){
                    parCat[v] = inf;
                    continue;
                }else if(parCat[u] + cat[v] > m){
                    parCat[v] = inf;
                }else if(parCat[u] + cat[v] <= m and  cat[v] == 1){
                    parCat[v] = parCat[u] + cat[v];
                }else if(parCat[u] + cat[v] <= m and  cat[v] == 0){
                    parCat[v] = 0;
                }

                if(deg[v] == 1 and (parCat[u] + cat[v]) <= m){
                    ans++;
                }

            }
        }
    }

    cout << ans << "\n";
 
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