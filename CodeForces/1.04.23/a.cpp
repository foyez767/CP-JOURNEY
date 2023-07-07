#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin  >> n;

    if(n <= 14 or n == 25 or n == 16 or n == 17 or n == 18 or n == 19 or n == 22 or n == 23 or n == 24)
     cout << "YES\n";
    else cout << "NO\n";

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