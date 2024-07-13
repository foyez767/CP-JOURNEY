#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e5 + 7;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int n, vis[3][N];

bool isValid (int i, int j) {
    if (i < 1 or j < 1 or i > 2 or j > n or vis[i][j] == true) {
        return false;
    }
return true;
}

void solve(){
    cin >> n;

    char grid[3][n + 1];
    
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> grid[i][j];
        }
    }

    queue<tuple<int,int,int>> q;
    vis[1][1] = true;
    q.push({1, 1, 1});

    while (!q.empty()) {
        auto [x, y, op] = q.front(); q.pop();

        if (op == 1) {
            for (int k = 0; k < 4; k++) {
                int i = x + dx[k], j = y + dy[k];

                if (isValid(i, j)) {
                    vis[i][j] = true;
                    q.push({i, j, 2});
                }
            }
            op = 2;
        } else {
            if (grid[x][y] == '>') {
                q.push({x + 1, y, 1});
            } else {
                q.push({x - 1, y, 1});
            }

            op = 1;
        }

    }



}
 
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}