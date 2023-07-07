#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
    int n, t, tt; cin >> n >> t;
    tt = t;
 
    vector<int> time(n, 0), et(n, 0);
 
    for(auto &x : time) cin >> x;
    for(auto &x : et)   cin >> x;
 
    if(n == 1) {
        if(t >= time[0]) cout << 1 << "\n";
        else cout << -1 << "\n";
        return;
    }
 
    int mxE = -1, idx = -1;
    
    if(t >= time[0]) {
        mxE = et[0], idx = 0;
    }
    t--;
 
    for(int i = 1; i < n; i++) {
        if(t >= time[i] and et[i] > mxE) {
            idx = i;
            mxE = et[i];
        } 
        t--;
        if(t <= 0) break;
    }
 
    if(idx == -1) {
        cout << -1 << "\n";
    }
    else {
        cout << idx + 1 << "\n";
    }
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