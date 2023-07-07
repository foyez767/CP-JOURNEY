#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int mod = 100000007;

void solve(){
    int n, K; cin >> n >> K;

    int coins[n + 1]{};
    for(int i = 1; i <= n; i++) cin >> coins[i];

    ll memo[K + 1] {};

    memo[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int k= 0; k <= K; k++){
            if(k - coins[i] >= 0){
                memo[k] += memo[k - coins[i]] % mod;
            }
        }
    }

    cout << (memo[K] % mod) << "\n";
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case " << i << ": ";
        solve();
    }
    
    return 0;
}