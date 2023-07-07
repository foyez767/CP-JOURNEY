#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 7;
vector<int> grp[N];

void solve(){
    int n, e; cin >> n >> e;

     for(int i = 1; i <= e; i++){
        int u, v; cin >> u >> v;
        grp[u].push_back(v);
        grp[v].push_back(u);
    }

    if(e == (n - 1)) cout << "YES\n";
    else cout << "NO\n";
 
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