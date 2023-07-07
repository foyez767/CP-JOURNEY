#include<bits/stdc++.h>
#define ll long long
#define inf 1e8
using namespace std;

const int N = 2e5 + 7;
vector<int> grp[N],ans(N,0);
bool vis[N];

void solve(){
    int n;  cin >> n;

    vector<int> vec(n + 1, 0),dupli(n + 5, 0);

    for(int i = 1; i <= n; i++){
        cin >> vec[i];
        dupli[i] = vec[i] % 2;

        if(i + vec[i] <= n)
            grp[i + vec[i]].push_back(i);
        if(i - vec[i] > 0 ) 
            grp[i - vec[i]].push_back(i);
    }

    queue<int> q;
    vector<int> dis(N, inf);
    // even part
    for(int i = 1; i <= n; i++){
        if(dupli[i] == 0){
            dis[i] = 0;
            q.push(i);
        }
    }

    // queue<int> q;
    // q.push(n + 1);

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(auto v : grp[u]){
            if(dis[v] == inf){
                dis[v] = dis[u] + 1;
                q.push(v);
            }
        }
    }

    for(int i = 1; i <= n; i++){
        if(dupli[i]){
            ans[i] = dis[i];
        }
    }
// odd part
    vector<int> dis2(N, inf);

    for(int i = 1; i <= n; i++){
        if(dupli[i] % 2){
            dis2[i] = 0;
            q.push(i);
        }
    }

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(auto v : grp[u]){
            if(dis2[v] == inf){
                dis2[v] = dis2[u] + 1;
                q.push(v);
            }
        }
    }

    for(int i = 1; i <= n; i++){
        if(dupli[i] == 0){
            ans[i] = dis2[i];
        }
    }

    for(int i = 1; i <= n; i++){
        if(ans[i] == inf){
            cout << -1 << " ";
        }else cout << ans[i] << " ";
    }

    cout << "\n";
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