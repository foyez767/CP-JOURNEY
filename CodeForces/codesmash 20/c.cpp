#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 2e5 + 7;
vector<int> grp[N];
int outdeg[N];

void solve(){
    memset(outdeg, 0, sizeof outdeg);
    int n; cin >> n;

    for(int i = 1; i < n; i++){
        int u, v; cin >> u >> v;
        grp[u].push_back(v);
        outdeg[u]++;
    }

    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(outdeg[i] == 0){
            ans++;
        }
    }
 
    cout << ans << "\n";
    for(int i = 1; i < n; i++) grp[i].clear();
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}