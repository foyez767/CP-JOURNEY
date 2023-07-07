#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;

    if(n % 2) {
        if(n > 1) cout << -1 << "\n";
        else cout << "1\n";
    return;
    }

    vector<int> pref;

    for(int i = 1, j = n; i <= n and j >= 2; j -= 2, i += 2) {
        cout << j << " " << i << " ";
    }
    cout << "\n";

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