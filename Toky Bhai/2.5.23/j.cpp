#include<bits/stdc++.h>
#define int long long
using namespace std;

void primefactor(int n, map<int,int> &npf){
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            while(n % i == 0){
                npf[i]++;
                n /= i;
            }
        }
    }
    if(n > 1) npf[n]++;
}

void solve(){
    int n; cin >> n;

    map<int,int> set;

    for(int i = 1; i <= n; i++) {
        map<int,int> npf;
        primefactor(i, npf);

        int ans = 0, ans2 = 1;
        for(auto v : npf) {
            if(v.second % 2) {
                ans2 *= v.first;
            }
        }

        (ans2 == 1) ? set[ans]++ : set[ans2]++;
    }

    int ans = 0;
    for(auto s : set) {
        ans += (s.second * s.second);
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