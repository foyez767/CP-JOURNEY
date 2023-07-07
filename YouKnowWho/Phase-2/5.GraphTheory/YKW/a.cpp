#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n, k, u, id;    cin >> n;
    int grp[n+1] [n+1] {};

    for(int i = 1; i <= n; i++){
        cin >> id >> k;
        for(int j = 1; j <= k; j++){
            cin >> u;
            grp[id][u] = 1;
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << grp[i][j];
            if(j < n) cout << " ";
        }
        cout << "\n";
    }
 
}
// foyez
 
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