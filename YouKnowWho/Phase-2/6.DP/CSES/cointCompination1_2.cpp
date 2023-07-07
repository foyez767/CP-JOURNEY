#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 103, mod = 1e9 + 7;

void solve(){
    int n, x ; cin >> n >> x;
    int arr[n + 1]{};
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    ll dp[x + 1]{};
    dp[0] = 1;

    for(int j = 1; j <= n; j++){
        for(int i = 1; i <= x; i++){
            if(i - arr[j] >= 0){
                dp[i] += dp[i - arr[j]] % mod;
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