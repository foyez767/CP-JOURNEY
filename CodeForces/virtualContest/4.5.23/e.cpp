#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;

    vector<int> vec(n, 0);

    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int fz = -1, lone = -1;
    for(int i = 0; i < n; i++) {
        if(vec[i] == 0 and fz == -1) fz = i;
        else if(vec[i] == 1) lone = i;
    }

    int ans = 0;
//zero to one
    if(fz != -1) {
        int cnt2 [2] {};
        int ans2 = 0;

        for(int i = n - 1; i >= 0; i--) {
            if(vec[i] == 0 and i == fz) {
                ans2 += cnt2[0];
            } else if(vec[i] == 0) cnt2[0]++;
            else ans2 += cnt2[0];
        }
        ans = max(ans, ans2);
    }
//one to zero
    if(lone != -1) {
        int cnt3[2] {};

        int ans3 = 0;

        for(int i = n - 1; i >= 0; i--) {
            if(vec[i] == 1 and i == lone) {
                cnt3[0]++;
            } else if(vec[i] == 0) cnt3[0]++;
            else ans3 += cnt3[0];
            
        }
        ans = max(ans, ans3);
    }
//no change
    int cnt[2] {}, ans4 = 0;
    for(int i = n - 1; i >= 0; i--) {
        if(vec[i] == 0) {
            cnt[0]++;
        } else {
            ans4 += cnt[0];
        }
    }

    ans = max(ans, ans4);

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