#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 100000007, N = 1001;

void solve(){
    int coins[N], nums[N], n, K, memo[55][N];
    memset(memo, 0, sizeof(memo));
    
    cin >> n >> K;

    for(int i = 1; i <= n; i++) cin >> coins[i];
    for(int i = 1; i <= n; i++) cin >> nums[i];

    memo[0][0] = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= nums[i]; j++){
            for(int k = 0; k <= K; k++){
                if(k - j * coins[i] >= 0){
                    memo[i][k] += memo[i - 1][k - j * coins[i]] % mod;
                }
            }
        }
    }

    cout << (memo[n][K] % mod) << "\n";
 
}
 
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case " << i << ": ";
        solve();
    }
    
    return 0;
}