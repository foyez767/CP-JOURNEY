#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n, target; cin >> n >> target;

    vector<int> arr(n + 1, 0);
    map<int,int> mp;

    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    vector<pair<int,pair<int,int>>> vec;

    for(int i = 1; i <= n; i++) {
        for(int j = i + 1; j <= n; j++) {
            vec.push_back({arr[i] + arr[j], {i, j}});
        }
    }

    int need2id = -1, need1id = -1;

    for(int i = 0; i < (int)vec.size(); i++) {
        int need = target - vec[i].first;
        
        if(mp[need] == 0) {
            continue;
        } else if(mp[need] > 2) {
            need2id = need;
        } else if(mp[need] > 1) {
            need1id = need;
        } else if(mp[need] == 1) {
            int id = lower_bound(arr.begin(), arr.end(), need) - arr.begin();
            set<int> se;
            se.insert(id), se.insert(vec[i].second.first), se.insert(vec[i].second.second);

            if(se.size() == 3) {
                for(auto s : se) cout << s << " "; cout << "\n";
            }
            return; 
        }
        
    }

    // cout << "IMPOSSIBLE\n";
 
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