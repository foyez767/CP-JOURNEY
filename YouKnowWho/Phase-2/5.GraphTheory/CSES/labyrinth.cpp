#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
using namespace std;

const int N = 1005;
char grid[N][N];
bool vis[N][N];
int prevStep[N][N];

int fx[] = {1, -1, 0, 0};
int fy[] = {0, 0, 1, -1};
char stepDir[] = {'D','U','R','L'};

int n, m;

bool isValid(int i, int j){
    if(i < 1 or j < 1 or i > n or j > m  or grid[i][j] == '#' or vis[i][j] == true)
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

            if(isValid(nx, ny) ){
                vis[nx][ny] = true;
                q.push(make_pair(nx,ny));

                prevStep[nx][ny] = k;
            }
        }
    }
}

void solve(){
    cin >> n >> m;

    pair<int,int> begin,end;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> grid[i][j];

            if(grid[i][j] == 'A'){
                begin = {i, j};
            }else if(grid[i][j] == 'B'){
                end = {i, j};
            }
        }
    }

    bfs(begin);

    if(vis[end.ff][end.ss]){
        vector<int> steps;

        while(end != begin){
            int p = prevStep[end.ff][end.ss];
            steps.push_back(p);
            
            end = make_pair(end.ff - fx[p],end.ss - fy[p]);
        }

        reverse(steps.begin(),steps.end());
        cout << "YES\n";
        cout << steps.size() << "\n";
        for(auto c : steps) cout << stepDir[c]; cout << "\n";
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