#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int X = 1e6 + 7, mod = 1e9 + 7;

void solve(){
    int n, x ; cin >> n >> x;
    int arr[n + 1]{};
    
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    int dp[X] {};
    
    dp[0] = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= x; j++){
            if(j - arr[i] >= 0){
                dp[i] += dp[j - arr[i]] % mod;
            }
        }
    }
    
    cout << (dp[x] % mod) << "\n";
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}