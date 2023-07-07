#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int x, k; cin >> x >> k;

    vector<int> vec(k, 0);

    for(auto &u : vec)  cin >> u;

    multiset<int> len, seg;
    seg.insert(0), seg.insert(x);
    len.insert(x);

    for(int i = 0; i < k; i++) {
        auto it = seg.upper_bound(vec[i]);
        int r = *it, l = *(--it);
        len.erase(len.find(r - l));
        len.insert(abs(vec[i] - l)), len.insert(abs(r - vec[i]));
        seg.insert(vec[i]);
        cout << (1LL * (*(--len.end()))) << " ";
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