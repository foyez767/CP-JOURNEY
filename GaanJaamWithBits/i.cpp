#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n, l, r, x; cin >> n >> l >> r >> x;

    vector<int> prob (n, 0);

    for (auto &x : prob) cin >> x;

    int ans = 0;

    for (int mask = 0; mask < (1 << n); mask++) {
        int ttl_diff = 0, cnt = 0;
        vector<int> pblmset;

        for (int k = 0; k < n; k++) {
            if ((mask >> k) & 1) {
                cnt++;
                ttl_diff += prob[k];
                pblmset.push_back(prob[k]);
            }
        }

        if(cnt < 2) continue;

        sort(pblmset.begin(), pblmset.end());

        int min_d = pblmset.front(), max_d = pblmset.back();

        if ((ttl_diff >= l and ttl_diff <= r) and ((max_d - min_d) >= x)) {
            ans++;
        }
    }

    cout << ans << "\n";
 
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