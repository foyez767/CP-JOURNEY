#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;

    vector<int> vec(n + 1, 0);

    map<int,int> cnt;
    
    for(int i = 1; i <= n; i++) {
        cin >> vec[i];
        cnt[vec[i]]++;
    }

    int ans = -1;
    
    for(int i = 1; i <= n; i++) {
        bool batti = true, flag = false;

        for(int j = 1; j <= n; j++) {
            if(i == j or vec[i] <= vec[j]) continue;

            flag = true;
            if(vec[i] > vec[j]) {
                batti = false;
                break;
            }
        }

        if(batti) {
            
            if(n - cnt[vec[i]] == 0) {
                continue;
            } else {
                cout << (n - cnt[vec[i]]) << "\n";
                return;
            }
        
        }
    }

    if(ans == -1) {
        int sotto = -1;
        for(auto mittha : cnt) {
            sotto = n - mittha.second;
            if(sotto == 0 and mittha.first != 0) {
                cout << -1 << "\n";
            } else if(sotto == 0 and mittha.first == 0) {
                cout << 0 << "\n";
            }
            else {
                cout << mittha.first << "\n";
            }
        }
    }
    else
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