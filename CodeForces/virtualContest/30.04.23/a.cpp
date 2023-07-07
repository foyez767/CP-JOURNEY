#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<int> vec (n + 1, 0);
    map<int,int> idx;

    for(int i = 1; i <= n; i++) {
        cin >> vec[i];
        idx[vec[i]] = i;
    }

    sort(vec.begin(), vec.end());

    for(int i = 1; i <= n; i++) vec[i] = idx[vec[i]];

    for(auto v : vec) cout << v << " "; cout << endl;
    
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