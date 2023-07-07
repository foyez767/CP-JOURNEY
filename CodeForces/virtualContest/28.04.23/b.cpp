#include<bits/stdc++.h>
#define int long long
using namespace std;

const int inf = 1e18;

void solve(){
    int n;  cin >> n;
    vector<int> vec(n, 0);
    for(auto &x : vec) cin >> x;

    sort(vec.begin(), vec.end());

    int ans = -inf;
    ans = max(ans, max(vec[0] * vec[1], vec[n - 1] * vec[n - 2]));

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