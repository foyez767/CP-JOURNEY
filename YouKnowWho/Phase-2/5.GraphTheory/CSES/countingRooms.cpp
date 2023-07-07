#include<bits/stdc++.h>
#define ll long long
using namespace std;

int fx[] = {1, -1, 0, 0};
int fy[] = {0, 0, 1, -1};

const int N = 1005;
char grid[N][N];
bool vis[N][N];

int n, m;

bool isValid(int i , int j){
    if(i < 1 or j < 1 or i > n or j > m or vis[i][j] == true or grid[i][j] != '.')
        return false;
return true;
}

void dfs(int i , int j){
    vis[i][j] = true;

    for(int k = 0; k < 4; k++){
        int nx = i + fx[k];
        int ny = j + fy[k];

        if(isValid(nx, ny))
            dfs(nx, ny);
    }

}

void solve(){
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> grid[i][j];
        }
    }

    int ans = 0;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(!vis[i][j] and grid[i][j] == '.'){
                ans++;
                dfs(i, j);
            }
        }
    }

    cout << ans << "\n";
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