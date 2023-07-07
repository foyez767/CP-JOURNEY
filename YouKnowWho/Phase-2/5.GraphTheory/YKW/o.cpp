#include<bits/stdc++.h>
using namespace std;

const int N = 105;
vector<int> grp[N];
bool vis[N];
int indeg[N];

int main(){

    while(true){
        int n, e;   cin >> n >> e;

        if(n == 0 and e == 0) break;

        for(int i = 1; i <= e; i++){
            int u, v; cin >> u >> v;
            grp[u].push_back(v);
            indeg[v]++;
        }

        vector<int> ans, zin;

        for(int i = 1; i <= n; i++){
            if(indeg[i] == 0){
                zin.push_back(i);
                vis[i] = true;
            }
        }

        while(ans.size() < n){
           int cur = zin.back();
           zin.pop_back();
           ans.push_back(cur);

           for(auto v : grp[cur]){
                indeg[v]--;

                if(!vis[v] and indeg[v] == 0){
                    zin.push_back(v);
                    vis[v] = true;
                }
           }
        }

        for(auto x : ans) cout << x << " "; cout << "\n";
        
        memset(vis, false, sizeof(vis));
        memset(indeg, 0, sizeof(indeg));
        for(int i = 1; i <= n; i++) grp[i].clear();
    }

    return 0;
}