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

bool isValid(int i, int j){
    if(i < 1 or j < 1 or i > n or j > m or vis[i][j] == true or grid[i][j] == '#' or grid[i][j] == 'M')
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
                q.push(make_pair(nx, ny));

                prevStep[nx][ny] = k;
            }
        }
    }
}


void solve(){
    cin >> n >> m;

    pair<int,int> begin, end;
    vector<pair<int,int>>psbl;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> grid[i][j];

            if(grid[i][j] == 'A')
                begin = {i, j};
            
            if(i == 1 and grid[i][j] == '.') psbl.push_back(make_pair(i,j));
            else if(i == n and grid[i][j] =='.') psbl.push_back(make_pair(i,j));
            else if(j == 1 and grid[i][j] == '.') psbl.push_back(make_pair(i,j));
            else if(j == m and grid[i][j] == '.') psbl.push_back(make_pair(i,j));
        }
    }

    bfs(begin);

    bool ok = false;

    for(int i = 0; i < psbl.size(); i++){
        int x = psbl[i].ff , y = psbl[i].ss;
        if(vis[x][y]){
            end = make_pair(x, y);
            ok = true;
            break;
        }
    }

    if(ok){
        vector<int> steps;

        while(end != begin){
            pair<int,int> p = end;

            int k = prevStep[p.ff][p.ss];

            steps.push_back(k);

            end = {p.ff - fx[k], p.ss - fy[k]};
        }

        reverse(steps.begin(),steps.end());

        cout << "YES\n" << steps.size() << "\n";
        
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