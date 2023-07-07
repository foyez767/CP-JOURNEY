#include<bits/stdc++.h>
#define ll long long
#define inf 1e6
using namespace std;

const int N = 23, W = 1005;
int dp[N][4], red[N],blue[N],gren[N], n;

int minCost(int i ,int chc){
    if(i == 1 and chc == 1)
        return red[i];
    if(i == 1 and chc == 2)
        return gren[i];
    if(i == 1 and chc == 3)
        return blue[i];

    int ans = 0;
    if(dp[i][chc] != -1)
        return dp[i][chc];
    if(chc == 1){
        ans = min(minCost(i - 1, 2), minCost(i - 1, 3)) + red[i];
        dp[i][chc] = ans;
    }

    if(chc == 2){
        ans = min(minCost(i - 1, 1), minCost(i - 1,3)) + gren[i];
        dp[i][chc] = ans;
    }

    if(chc == 3){
        ans = min(minCost(i - 1, 1), minCost(i - 1,2)) + blue[i];
        dp[i][chc] = ans;
    }
return dp[i][chc];
}

void solve(){
    // memset(red, 0, sizeof(red));
    // memset(gren, 0, sizeof gren);
    // memset(blue, 0, sizeof blue);
    memset(dp, -1, sizeof dp);
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> red[i] >> gren[i] >> blue[i];
    }
 
    int ans = minCost(n, 1);
    memset(dp, -1, sizeof dp);
    int ans2 = minCost(n, 2);
   memset(dp, -1, sizeof dp); 
    int ans3 = minCost(n, 3);

    cout << min(ans, min(ans2,ans3)) << "\n";
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin.ignore();
        cout << "Case " << i << ": ";
        solve();
    }
    
    return 0;
}