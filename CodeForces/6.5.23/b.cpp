#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool rec(int n, int m) {
    if(n == m) return 1;
    if(m > n) return 0;

    if(n % 3 == 0) {
        return rec(n / 3, m) + rec(2 * n / 3, m);
    }
return false;
}

void solve(){
 
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