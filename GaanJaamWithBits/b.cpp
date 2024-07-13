#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;

    cout << (n | (1LL << k)) << "\n";
 
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