#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 201;
vector<int> grp[N];

void solve(){
    int n, e; cin >> n >> e;

    for(int i = 1; i <= e; i++) {
        int u, v; cin >> u >> v;
        grp[u].push_back(v);
        grp[v].push_back(u);
    }
    //detecting leaf node
    bool leaf [201] {};

    for(int i = 1; i <= n; i++) {
        if(grp[i].size() == 1) {
            leaf[i] = true;
        }
    }

    int x = -1, y = -1;
//detecting centre node
    for(int i = 1; i <= n; i++) {
        bool batti = true;
        if(!leaf[i]) {
            for(auto v : grp[i]) {
                if(leaf[v]) {
                    batti = false;
                    break;
                }
            }
            if(batti) {
                x = grp[i].size();
                leaf[i] = true;
                break;
            }
        }
    }

    //others node
    for(int i = 1; i <= n; i++) {
        if(!leaf[i]) {
            y = grp[i].size();
        }
    }

    cout << x << " " << (y - 1) << "\n";

    for(int i = 1; i <= n; i++) grp[i].clear();
}
 
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}