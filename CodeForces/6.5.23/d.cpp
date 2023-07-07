#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n, target; cin >> n >> target;

    vector<int> vec(n + 1, 0);

    for(int i = 1; i <= n; i++) cin >> vec[i];

    map<int,pair<int,int>> mp;

    int b = n - 2;

    for(int b = n - 2; b >= 1; b--) {
        for(int a = 1; a < b; a++) {
            int need = target - (vec[a] + vec[b]);

            if(mp.count(need)) {
                cout << a << " " << b << " " << mp[need].first << " " <<  mp[need].second << "\n";
                return;
            }
        }

        for(int i = b + 1; i <= n; i++) {
            mp[vec[i] + vec[b]] = {b, i};
        }
    }

    cout << "IMPOSSIBLE\n";
 
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