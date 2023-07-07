#include<bits/stdc++.h>
using namespace std;

const int N = 25;
char grid[N][N];
bool vis[N][N];
int w, h, ans;

void dfs(int r, int c){
    if(r <  1 or c < 1 or r > h or c > w or vis[r][c] == true or grid[r][c] == '#')
        return;

    vis[r][c] = true;

    if(grid[r][c] == '.'){
        ans++;
    }


    dfs(r + 1, c);
    dfs(r - 1, c);
    dfs(r, c + 1);
    dfs(r, c - 1);
}

void solve(){
   cin >> w >> h;
   int r = 0, c = 0;

    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            cin >> grid[i][j];

            if(grid[i][j] == '@'){
                r = i, c = j;
            }
        }
    }

    ans = 0;
    dfs(r, c);


    cout << ans + 1 << "\n";
    
    memset(vis, 0, sizeof(vis));
    memset(grid, '0', sizeof(grid));
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