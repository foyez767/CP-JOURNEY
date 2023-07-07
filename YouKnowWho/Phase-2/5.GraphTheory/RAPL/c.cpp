#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1005;
char grid[N][N];
bool vis[N][N];
int n, m;

int fx[] = {1, -1, 0, 0};
int fy[] = {0, 0, 1, -1};

bool isValid(int r,int c){
    if(r < 1 or c < 1 or r > n or c > m or vis[r][c] == true or grid[r][c] == '#')
        return false;
return true;
}

void dfs(int r, int c){
    vis[r][c] = true;

    for(int k = 0; k < 4; k++){
        int nx = r + fx[k];
        int ny = c + fy[k];

        if(isValid(nx, ny)){
            dfs(nx, ny);
        }
    }
}


void solve(){
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> grid[i][j];
        }
    }

    int cnt = 0;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(isValid(i,j)){
                cnt++;
                dfs(i, j);
            }
        }
    }

    cout << cnt << "\n";
 
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