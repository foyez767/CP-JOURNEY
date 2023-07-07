#include<bits/stdc++.h>
using namespace std;

const int N = 105;
vector<int> grp[N],dis(N,0);
bool vis[N];

void solve(){
    int n, id, k, u;  cin >> n;
 
    for(int i = 1; i <= n; i++){
        cin >> id >> k;
        for(int j = 1; j <= k; j++){
            cin >> u;
            grp[id].push_back(u);
        }
    }

    //bfs
    queue<int> q;
    q.push(1), vis[1] = true;

    while(!q.empty()){
        u = q.front();
        q.pop();

        for(auto v : grp[u]){
            if(!vis[v]){
                vis[v] = true;
                dis[v] = dis[u] + 1;
                q.push(v);
            }
        }
    }

    cout << 1 << " " << 0 << "\n";
    for(int i = 2; i <= n; i++){
        cout << i << " ";
        if(dis[i] == 0)
            cout << -1 << "\n";
        else cout << dis[i] << "\n";
    }
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