#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1005, mod = 1e9 + 7;
char grid[N][N];
ll ways[N][N];
int r, c;

ll rec(int i, int j){
    if(i == 1 and j == 1){
        return 1;
    }
    if(i < 1 or j < 1 or i > r or j > c or grid[i][j] == '#')
        return 0;
    if(ways[i][j] != -1){
        return ways[i][j];
    }
    if(grid[i][j] == '.'){
        ways[i][j] = (rec(i - 1, j) % mod + (rec(i, j - 1) % mod)) % mod;
    }
return ways[i][j];
}
void solve(){
    memset(ways, -1, sizeof ways);
    cin >> r >> c;

    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            cin >> grid[i][j];
        }
    }

    cout << rec(r, c) << "\n";
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