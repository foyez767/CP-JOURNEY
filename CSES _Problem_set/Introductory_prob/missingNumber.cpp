#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;

    bool batti [n + 1] {};

    for(int i = 1; i < n; i++){
        int x; cin >> x;
        batti[x] = true;
    }

    for(int i = 1; i <= n; i++){
        if(!batti[i]) {
            cout << i << "\n";
            return;
        }
    }
}
 
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}