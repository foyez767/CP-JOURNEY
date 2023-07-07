#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 7;
int arr[21], n;

int rec(int i, int crnt_val, int ttl) {
    if(i == n + 1) return (int)abs(ttl - crnt_val);
    
    return min(rec(i + 1, crnt_val + arr[i], ttl - arr[i]), rec(i + 1, crnt_val, ttl));
}

void solve(){
    cin >> n;
    int ttl = 0;

    for(int i = 1; i <= n; i++) {
        cin >> arr[i]; 
        ttl += arr[i];
    }

    cout << rec(1, 0, ttl) << "\n";
 
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