#include<bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 100000007;

void solve(){
    int n, K; cin >> n >> K;
    int coins[n + 1]{}, nums[n + 1] {};

    for(int i = 1; i <= n; i++) cin >> coins[i];
    for(int i = 1; i <= n; i++) cin >> nums[i];

    bool memo[n + 1][K + 1]{};

    memo[0][0] = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= nums[i]; j++){
            for(int k = 0; k <= K; k++){
                if(k - j * coins[i] >= 0){
                    memo[i][k] |= memo[i - 1][k - j * coins[i]];
                }
            }
        }
    }

    int ans = 0;
    for(int k = 0; k <= K; k++){
        if(memo[n][k]){
            ans++;
        }
    }
    cout << ans << endl;
 
}
 
int32_t main(){
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