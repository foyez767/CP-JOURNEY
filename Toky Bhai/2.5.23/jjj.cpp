#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
     int n, target; cin >> n >> target;

    vector<int> arr(n + 1, 0);
    map<int,int> cnt;

    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        cnt[arr[i]]++;
    }

    for(int i = 1; i <= n; i++) {
        int need = target - arr[i];

        if(cnt[need] > 1) {
            
        }
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