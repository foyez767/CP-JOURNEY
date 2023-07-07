#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1002, mod = 1e9 + 7;
ll ways[N][N];
char grid[N][N];
int r, c;

void solve(){
    cin >> r >> c;

    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            cin >> grid[i][j];
        }
    }

    ways[1][1] = 1;

    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            if(grid[i][j] == '#'){
                ways[i][j] = 0;
                continue;
            }
            ways[i][j] += (ways[i - 1][j] % mod + ways[i][j - 1] % mod ) % mod;
        }
    }

    cout << (ways[r][c] % mod) << "\n";
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