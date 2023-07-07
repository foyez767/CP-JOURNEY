#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n, m; cin >> n >> m;

    vector<int> vec(n + 1, 0), pref(n + 1, 0);

    for(int i = 1; i <= n; i++) cin >> vec[i];

    partial_sum(vec.begin(), vec.end(), pref.begin());

    while(m--) {
        int x ; cin >> x;

        int dorm = lower_bound(pref.begin(), pref.end(), x) - pref.begin();

        int room = x - pref[dorm - 1];

        cout << dorm << " " << room << "\n";
    }

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