#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;

    bitset<32> bit (n);

    bit.flip();
    
    int ans = 0;

    for (int k = 0; k < 32; k++) {
        if(bit[k]) {
            ans += (1LL << k);
        }
    }

    cout << ans << "\n";
 
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