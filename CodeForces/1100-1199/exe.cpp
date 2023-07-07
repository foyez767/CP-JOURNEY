#include <bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve() {
    int n, k, r, c;
    std::cin >> n >> k >> r >> c;
    
    ll org=(r+c) %k,diff=0;
    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=n; j++){
            diff= (i+j) %k;
            if(org==diff) cout<<"X";
            else cout<<".";
        }
        cout<<nn;
    }
}
 
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t=1;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}