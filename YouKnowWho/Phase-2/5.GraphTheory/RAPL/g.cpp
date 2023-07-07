#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;

int fx[] = {1, -1, 0, 0};
int fy[] = {0, 0, 1, -1};
char stepDir[] = {'D','U','R','L'};

const int N = 1005;
char grid[N][N];
bool vis[N][N];
int prevStep[N][N];
int n, m;

bool isValid(int r, int c){
    if(r < 1 or c < 1 or r > n or c > m or grid[r][c] == '#' or vis[r][c] == true)
        return false;
return true;
}

void bfs(pair<int,int> begin){
    queue<pair<int,int>> q;
    q.push(begin);

    vis[begin.ff][begin.ss] = true;

    while(!q.empty()){
        pair<int,int> p = q.front();
        q.pop();

        for(int k = 0; k < 4; k++){
            int nx = p.ff + fx[k];
            int ny = p.ss + fy[k];

            if(isValid(nx, ny)){
                vis[nx][ny] = true;
                q.push({nx,ny});
                prevStep[nx][ny] = k;
            }
        }
    }
}

void solve(){
    cin >> n >> m;

    pair<int,int> strt, ed;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> grid[i][j];

            if(grid[i][j] == 'A'){
                strt = {i, j};
            }else if(grid[i][j] == 'B'){
                ed = {i, j};
            }
        }
    }

    bfs(strt);

    if(vis[ed.ff][ed.ss]){
        vector<int> steps;
        
        while(strt != ed){
            int p = prevStep[ed.ff][ed.ss];
            steps.push_back(p);

            ed = {ed.ff - fx[p], ed.ss - fy[p]};
        }

        reverse(steps.begin(),steps.end());

        cout << "YES\n";
        cout << steps.size() << "\n";
        for(auto v : steps) cout << stepDir[v]; cout << "\n";
    }else{  
        cout << "NO\n";
    }



 
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