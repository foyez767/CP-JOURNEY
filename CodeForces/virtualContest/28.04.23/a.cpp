#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;

    vector<int> vec(n - 1, 0);

    for(auto &x : vec) cin >> x;

    // for(auto v : vec) cout << v << " "; cout << endl;

    cout << vec[0] << " ";

    for(int i = 0; i < n - 2; i++) {
        cout << min(vec[i], vec[i + 1]) << " ";
    }
    cout << vec[n - 2] << "\n";
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