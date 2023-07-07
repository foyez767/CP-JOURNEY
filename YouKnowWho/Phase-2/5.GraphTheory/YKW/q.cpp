#include<bits/stdc++.h>
using namespace std;

int fx[] = {1, -1, 0, 0, +1, +1, -1, -1};
int fy[] = {0, 0, 1, -1, +1, -1, +1, -1};

const int N = 105;
char grid [N][N];
bool vis[N][N];

int r, c;

bool valid(int i, int j){
    if(i < 1 or j < 1 or i > r or j > c or vis[i][j] == true or grid[i][j] == '*')
        return false;
return true;
}

void dfs(int i , int j){   
    vis[i][j] = true;

    for(int k = 0; k < 8; k++){
        int nx = i + fx[k];
        int ny = j + fy[k];

        if(valid(nx,ny)){
            dfs(nx, ny);
        }
    }
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    while(true){
        cin >> r >> c;
        memset(vis, false, sizeof(vis));
        if(r == 0) break;

        for(int i = 1; i <= r; i++){
            for(int j = 1; j <= c; j++){
                cin >> grid[i][j];
            }
        }

        int ans = 0;

        for(int i = 1; i <= r; i++){
            for(int j = 1; j <= c; j++){
                if(!vis[i][j] and grid[i][j] == '@'){
                    dfs(i, j);
                    ans++;
                }
            }
        }

        cout << ans << "\n";
    }
    
    return 0;
}