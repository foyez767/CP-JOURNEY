#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1005;
vector<int> grp[N];
bool vis[N];
int cst = 0, mem = 0,cost[N];

void dfs(int u){
    vis[u] = true;
    cst += cost[u];
    mem++;
    for(auto v : grp[u]){
        if(!vis[v]){
            dfs(v);
        }
    }

}
void solve(){
    memset(cost, 0, sizeof(cost));
    memset(vis, false, sizeof(vis));
    memset(grp, 0, sizeof(grp));

    int n, e;   cin >> n >> e;

    for(int i = 1; i <= n; i++){
        cin >> cost[i];
    }

    for(int i = 1; i <= e; i++){
        int u, v;  cin >> u >> v;
        grp[u].push_back(v);
        grp[v].push_back(u);
    }

    map<int,int> mp;
    bool batti = true;
    int k = 0, psbl = 0;

    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            k++;
            cst = 0, mem = 0;
            dfs(i);
            if(cst % mem == 0){
                psbl = cst / mem;
                mp[cst/mem]++;
            }else batti = false;
        }
    }

    if(mp[psbl] != k) batti = false;

    if(batti) cout << "Yes\n";
    else cout << "No\n";
 
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    // cin >> t;
    for(ll i = 1; i <= t; i++){
        cout << "Case " << i << ": ";
        solve();
    }
    
    return 0;
}