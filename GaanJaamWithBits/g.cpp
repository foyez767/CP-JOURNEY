#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;

    int k = __builtin_popcount(n);

    cout << ((1LL << k) - 1) << "\n";
 
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