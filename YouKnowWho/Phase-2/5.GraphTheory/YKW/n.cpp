#include<bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
int cnter[N],lives[N];
bool vis[N];

void solve(){
    vector<int> grp[N];
    memset(cnter, 0, sizeof(cnter));
    memset(lives, 0, sizeof(lives));

    int k, n, m;    cin >> k >> n >> m;

    for(int i = 1; i <= k; i++){
        cin >> lives[i];
    }

    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        grp[u].push_back(v);
    }

    for(int i = 1; i <= k; i++){
        memset(vis, false, sizeof(vis));
        queue<int> q;
        q.push(lives[i]);
        vis[lives[i]] = true;
        cnter[lives[i]]++;

        while(!q.empty()){
            int u = q.front();
            q.pop();

            for(auto v : grp[u]){
                if(!vis[v]){
                    vis[v] = true;
                    q.push(v);
                    cnter[v]++;
                }
            }
        }
    }

    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(cnter[i] == k)
            ans++;
    }

    cout << ans << "\n";
    grp->clear();
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case " << i << ": ";
        solve();
    }
    
    return 0;
}