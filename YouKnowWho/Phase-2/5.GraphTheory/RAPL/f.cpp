#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 7;
vector<int> grp[N],par(N,0);
bool vis[N];



void solve(){
    int n, e; cin >> n >> e;

    for(int i = 1; i <= e; i++){
        int u, v; cin >> u >> v;
        grp[u].push_back(v);
        grp[v].push_back(u);
    }
 
    queue<int> q;
    q.push(1), vis[1] = true;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(auto v : grp[u]){
            if(!vis[v]){
                vis[v] = true;
                par[v] = u;
                q.push(v);
            }
        }
    }

    if(vis[n]){
        vector<int> ans;
        ans.push_back(n);

        while(n != 1){
            ans.push_back(par[n]);
            n = par[n];
        }
        reverse(ans.begin(),ans.end());

        cout << ans.size() << "\n";
        
        for(auto v : ans) cout << v << " "; cout << "\n";

    }else cout << "IMPOSSIBLE\n";
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