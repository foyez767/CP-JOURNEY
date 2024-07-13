#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;

    int xor_all = 0;

    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        xor_all = xor_all ^ x;
    }

    if (xor_all == 0) cout << 0 << "\n";
    else if (n % 2 == 1) cout << xor_all << "\n";
    else cout << "-1\n";
 
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