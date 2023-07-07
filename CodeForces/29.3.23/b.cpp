#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e3 + 7;
string s;
int memo[N][N];

int lcs(int i, int j){
    if(i > j) return 0;
    if(memo[i][j] != -1){
        return memo[i][j];
    }
    int ans = 0;
    if(s[i] == s[j]){
        if(i == j){
            ans = 1;
        }else{
            ans = 2;
        }
        ans += lcs(i + 1, j + 1);
    }

    ans = max(ans, lcs(i + 1, j));
    ans = max(ans, lcs(i, j + 1));

    memo[i][j] = ans;
return ans;
}

void solve(){
    // string s;
    int n, k;
    cin >> n >> k;
    cin.ignore();
    getline(cin, s);

    for(int i = 0; i < n; i++){
        if(s[i] == ' '){
            s.erase(i, 1);
            i--;
        }
    }
    cout << s << endl;

    int ans = 0;
    for(int i = 0; i < s.length() - 1; i++){
        ans += lcs(i, i + k);
    }   

    cout << ans << "\n";
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