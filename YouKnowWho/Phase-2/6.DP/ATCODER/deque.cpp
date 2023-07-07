#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 3005;
int dp[N][N][2], arr[N], n;

//turn == 0(taru's turn)
//turn == 1(jiro's turn)
int rec(int i, int j , int turn){
    if(i > j){
        return 0;
    }
    if(i == j){
        if(turn == 0) return arr[i];
        else return 0;
    }

    if(dp[i][j][turn] != -1){
        return dp[i][j][turn];
    }

    int ans = 0;
    if(turn == 0){
        ans = max(arr[i] + rec(i + 1, j, 1), arr[j] + rec(i, j - 1, 1));
    }else{
        ans = min(rec(i + 1, j, 0), rec(i, j - 1, 0));
    }

    dp[i][j][turn] = ans;
return dp[i][j][turn];
}
void solve(){
    memset(dp, -1, sizeof(dp));
    cin >> n;

    int total = 0;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        total += arr[i];
    }    

    int mx_x = rec(1, n, 0);
    int mi_y = total - mx_x;

    cout << (mx_x - mi_y) << "\n";
}
 
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}