#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 1005, mod = 1e9 + 7;
char grid[N][N];
int n;
ll ways[N][N];

ll rec(int i , int j){
    if(i == 1 and j == 1){
        ways[i][j] = 1;
    }
    if(i < 1 or j < 1 or i > n or j > n or grid[i][j] == '*'){
        return 0;
    }

    if(ways[i][j] != -1){
        return ways[i][j];
    }

    if(grid[i][j] == '.'){
        ways[i][j] = (rec(i - 1, j) % mod + rec(i, j - 1) % mod ) % mod;
    }
return ways[i][j];
}


void solve(){
    memset(ways, -1, sizeof(ways));
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> grid[i][j];
        }
    }

    if(grid[1][1] == '*')
        cout << "0\n";
    else cout << rec(n, n) << "\n";
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