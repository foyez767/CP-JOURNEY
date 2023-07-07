#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 55;
string a, b , c;
int dp[N][N][N];

int lcs(int i, int j, int k){
    if(i >= a.length() or j >= b.length() or k >= c.length())
        return 0;

    if(dp[i][j][k] != -1){
        return dp[i][j][k];
    }

    int ans = -1;
    if(a[i] == b[j] and a[i] == c[k]){
        ans = max(ans, lcs(i + 1, j + 1, k + 1) + 1);
    }
    ans = max(ans, lcs(i + 1, j, k));
    ans = max(ans, lcs(i, j + 1, k));
    ans = max(ans, lcs(i, j, k + 1));
    ans = max(ans, lcs(i + 1, j + 1, k));
    ans = max(ans, lcs(i + 1, j , k + 1));
    ans = max(ans, lcs(i, j + 1, k + 1));

    dp[i][j][k] = ans;
return ans;
}

void solve(){
    memset(dp, -1, sizeof(dp));
    cin >> a >> b >> c;

    cout << lcs (0, 0, 0) << "\n";
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