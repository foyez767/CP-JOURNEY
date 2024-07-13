#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;

    int or_all = 0, and_all = -1;

    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        or_all |= x;
        and_all &= x;
    }

    cout << (or_all - and_all) << "\n";
 
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