#include<bits/stdc++.h>
// #define ll long long
using namespace std;



void solve(){
    int n; cin >> n;

    if(n % 19 == 0) cout << "Lucky\n";
    else cout << "Unlucky\n";
 
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}