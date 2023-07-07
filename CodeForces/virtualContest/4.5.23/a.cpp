#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a, b, c; cin >> a >> b >> c;

    vector<int> vec = {a,b, c};
    sort(vec.begin(), vec.end());

    cout << vec[1] << "\n";
 
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