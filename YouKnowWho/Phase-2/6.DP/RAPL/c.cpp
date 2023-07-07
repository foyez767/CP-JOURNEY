#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e6 + 5;

void solve(){
    int n, K; cin >> n >> K;
    int coins[n + 1] {}, nums[n + 1] {};
    int used [N] {};

    for(int i = 1; i <= n; i++) cin >> coins[i];
    for(int i = 1; i <= n; i++) cin >> nums[i];

    bool memo[K + 1]{};
    memo[0] = true;

    int ans = 0;
    for(int i = 1; i <= n; i++){
        memset(used, 0, sizeof(used));
        for(int crntVal = coins[i]; crntVal <= K; crntVal++){
            if(!memo[crntVal] and memo[crntVal - coins[i]] == true){
                if(used[crntVal - coins[i]] < nums[i]){
                    ans++;
                    memo[crntVal] = true;
                    used[crntVal] = used[crntVal - coins[i]] + 1;
                }
            }
        }
    }

    cout << ans << "\n";
 
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