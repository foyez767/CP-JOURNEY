#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;

    set<int> se;   
    vector<pair<int,int>> vec;

    for(int i = 1; i <= n; i++) {
        int l, r; cin >> l >> r;
        vec.push_back({l, r});
        se.insert(l), se.insert(r);
    }

    map<int,int> id;

    auto it = se.begin();
    int k = 1;

    while(it != se.end()) {
        id[*it] = k++, it++;
    }

    vector<int> pref(2 * n + 1 , 0);

    for(int i = 0; i < n; i++) {
        pref[id[vec[i].first]]++;
        pref[id[vec[i].second]]--;
    }

    partial_sum(pref.begin(), pref.end(), pref.begin());

    cout << 1LL * (*(max_element(pref.begin(), pref.end()))) << "\n";
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