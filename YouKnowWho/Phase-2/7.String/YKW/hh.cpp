#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 5e3 + 7;
int memo[N][N], pal[N][N];

string s; 
int n;

bool isPal(int i, int j) {
    if(i >= j) {
        if(s[i] == s[j])
            return true;
        else return false;
    }

    if(pal[i][j] != -1) {
        return pal[i][j];
    }

    return pal[i][j] = (s[i] == s[j]) & isPal(i + 1, j - 1);
}

int rec(int i, int j) {
    if(i > j or i >= n or j < 0) {
        return 0;
    }

    if(memo[i][j] != -1) {
        return memo[i][j];
    }

    return memo[i][j] = isPal(i, j ) + rec(i + 1, j) + rec(i, j - 1) - rec(i + 1, j - 1);
}
void solve(){
    memset(memo, -1, sizeof(memo));
    memset(pal, -1, sizeof(pal));
    cin >> s;
    n = s.length();
    rec(0, n - 1);

    int q; cin >> q;

    while(q--) {
        int l, r; cin >> l >> r;

        cout << memo[l - 1][r - 1] << "\n";
    }
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