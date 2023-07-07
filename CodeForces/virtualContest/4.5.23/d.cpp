#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;

    vector<int> vec(n + 1, 0);

    for(int i = 1; i <= n; i++) cin >> vec[i];
    
    string st;
    char t = 'T', f = 'F';

    for(int i = 2; i <= n; i++) {
        if(vec[i - 1] >= vec[i]) {
            st += t;
        } else if(vec[i - 1] <= vec[i]) {
            st += f;
        }
    }

    cout << st << endl;
 
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