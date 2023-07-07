//(0 to n/2) and (n/2 + 1 to n) ei 2ta string er lcs e hsse answer
#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1005;

int memo[N][N];
string s;

int lcs(int i, int j){
    if(i > j) return 0;
    if(memo[i][j] != -1)
        return memo[i][j];
    
    int ans = 0;
    if(s[i] == s[j]){
        if(i != j) ans = 2;
        else ans = 1;
        ans += lcs(i + 1, j - 1);
    }
    ans = max(ans, lcs(i + 1, j));
    ans = max(ans, lcs(i, j - 1));

    memo[i][j] = ans;
return memo[i][j];
}

void solve(){
    memset(memo, -1, sizeof(memo));

    getline(cin, s);

    int n = s.length();

    cout << lcs(0, n - 1) << "\n";

}
 
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    cin.ignore();
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}