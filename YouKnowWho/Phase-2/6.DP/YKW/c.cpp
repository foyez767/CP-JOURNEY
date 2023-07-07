#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 7;
ll swim[N],home[N],bugs[N],dp[N][4];

ll count(int i,int chc){
    if(i == 1 and chc == 1)
        return swim[1];
    if(i == 1 and chc == 2)
        return bugs[1];
    if(i == 1 and chc == 3)
        return home[1];

    if(dp[i][chc] != -1)
        return dp[i][chc];

    
    ll ans = -1;
    if(chc == 1){
        ans = max(count(i - 1, 2), count(i - 1, 3)) + swim[i];
        dp[i][chc] = ans;
    }
    if(chc == 2){
        ans = max(count(i - 1, 1),count(i - 1, 3)) + bugs[i];
        dp[i][chc] = ans;
    }
    if(chc == 3){
        ans = max(count(i - 1,1), count(i - 1, 2)) + home[i];
        dp[i][chc] = ans;
    }

return dp[i][chc];
}

void solve(){
    memset(dp, -1, sizeof(dp));
    int n; cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> swim[i] >> bugs[i] >> home[i];
    }

    ll ans1 = count(n, 1);
    memset(dp, -1, sizeof(dp));
    ll ans2 = count(n, 2);
    memset(dp, -1, sizeof(dp));
    ll ans3 = count(n, 3);

    cout << max(ans1, max(ans2,ans3)) << "\n";
    
 
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