#include<bits/stdc++.h>
using namespace std;

const int N = 3003;
int dp[N][N];
string a, b;

int lcs(int i , int j){
    if(i >= a.length() or j >= b.length()) return 0;
    if(dp[i][j] != -1)
        return dp[i][j];
    int ans = -1;
    ans = lcs(i + 1, j);
    ans = max(ans, lcs(i, j + 1));

    if(a[i] == b[j]){
        ans = max(ans, lcs(i + 1, j + 1) + 1);
    }

    dp[i][j] = ans;
return dp[i][j];
}

void print(int i, int j){
    if(i >= a.length() or j >= b.length()) return;

    if(a[i] == b[j]){
        cout << a[i];
        print(i + 1, j + 1);
        return;
    }

    int x = lcs(i + 1, j);
    int y = lcs(i, j + 1);

    if(x >= y)
        print(i + 1, j);
    else print(i, j + 1);
}
void solve(){
    memset(dp, -1, sizeof(dp));
    cin >> a >> b;

    print(0,0);

 
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