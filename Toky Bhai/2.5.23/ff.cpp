#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    vector<int> arr(n + 1, 0);

    int gc = 0;

    for(int i = 1; i <= n; i++) cin >> arr[i];

    for(int i = 2; i <= n; i++) {
        gc = __gcd(gc, abs(arr[i] - arr[i - 1]));
    }

    for(int i = 1; i <= m; i++) {
        int x; cin >> x;
        cout << (1LL * __gcd(gc, arr[1] + x)) << " ";
    }
    cout << "\n";
 
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