#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1001, mod = 1e9 + 7;
char grid[N][N];
int r, c;
ll ways[N][N];

ll count(int i, int j){
    if(i == 1 and j == 1) return 1;
    if(grid[i][j] == '#') return 0;
    if(ways[i][j] != -1){
        return ways[i][j];
    }
    ll ans = 0;
    if(grid[i][j] == '.')
        ans = (count(i, j - 1) % mod + count(i - 1, j) % mod) % mod;
    ways[i][j] = ans;
return ways[i][j];
}

void solve(){
    memset(ways, -1, sizeof(ways));
    cin >> r >> c;

    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            cin >> grid[i][j];
        }
    }

    cout << (count(r, c) % mod) << "\n";
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