#include<bits/stdc++.h>
#define inf 1e7
using namespace std;

const int N= 5003;
string a, b;
int dp[N][N];

int lcs(int i,int j){
    if(a.length() == i)
        return b.length() - j;
    if(b.length() == j)
        return a.length() - i;

    if(dp[i][j] != -1){
        return dp[i][j];
    }
    int ans = inf;

    if(a[i] == b[j]){
        ans = min(ans, lcs(i + 1, j + 1));
    }else{
        ans = min(ans, 1 + lcs(i + 1, j + 1));
    }

    ans = min(ans, 1 + lcs(i ,j + 1));
    ans = min(ans, 1 + lcs(i + 1, j));

    dp[i][j] = ans;
return dp[i][j];
}

void solve(){
    memset(dp, -1, sizeof dp);
    cin >> a >> b;
 
    cout << lcs(0, 0) << "\n";
 
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