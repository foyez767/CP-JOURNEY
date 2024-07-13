#include<bits/stdc++.h>
#define int long long
using namespace std;

const int MAX = 4005, N = 1e5 + 7;
bitset<MAX> pref_mask_a[N], pref_mask_b[N];

void solve(){
    int n, m, q; cin >> n >> m >> q;

    pref_mask_a[0].reset();
    pref_mask_b[0].reset();

    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        pref_mask_a[i] = pref_mask_a[i - 1];
        pref_mask_a[i].flip(x);
    }

    for (int i = 1; i <= m; i++) {
        int x; cin >> x;
        pref_mask_b[i] = pref_mask_b[i - 1];
        pref_mask_b[i].flip(x);
    }

    while(q--) {
        int l1, r1, l2, r2; cin >> l1 >> r1 >> l2 >> r2;

        auto subarray_xor_a = pref_mask_a[r1] ^ pref_mask_a[l1 - 1];
        auto subarray_xor_b = pref_mask_b[r2] ^ pref_mask_b[l2 - 1];

        auto merged_xor = subarray_xor_a ^ subarray_xor_b;

        cout << (merged_xor.count()) << "\n"; 
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