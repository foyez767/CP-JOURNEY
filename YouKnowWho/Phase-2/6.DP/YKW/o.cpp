#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int mod = 100000007, N = 1001;
int coins[N], nums[N], n, K, memo[55][N];

ll coinChange(int i, int crntVal){
    if(crntVal == 0) return 1;  
    if(i == n + 1) return 0;    

    if(memo[i][crntVal] != -1){
        return memo[i][crntVal];
    }
    memo[i][crntVal] = 0;

    for(int j = 0; j <= nums[i] and (crntVal - j * coins[i] >= 0); j++){
        memo[i][crntVal] += coinChange(i + 1, crntVal - j * coins[i]) % mod;
    }
return memo[i][crntVal];
}

void solve(){
    memset(memo, -1, sizeof(memo));
    cin >> n >> K;

    for(int i = 1; i <= n; i++) cin >> coins[i];
    for(int i = 1; i <= n; i++) cin >> nums[i];

    cout << (coinChange(1, K) % mod) << "\n";
 
}
 
int main(){
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