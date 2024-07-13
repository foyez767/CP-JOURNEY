#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int l, r; cin >> l >> r;

    int ttl = (r - l + 1), ans = 0;

    int k = __lg(r);

    while ((r - (1 << k)) >= l) {
        int x = (r - (1<< k)) + 1;
        r -= x;
        ans = max(ans, x);
    }

    cout << (ttl - ans) << "\n";
 
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