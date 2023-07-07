#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 100;
int n; 
int arr[20];
bool vis[20];
vector<bool> mark(N, true);

void sieve() {
    mark[0] = mark[1] = false;
    for(int i = 2; i * i <= N; i++) {
        if(mark[i]) {
            for(int j = i * i; j <= N; j += i)
                 mark[j] = false;
        }
    }
}

void dfs(int x){
    if(x > 2){// always check last two elements
        if(mark[arr[x - 1] + mark[arr[x - 2]]] == false)
            return;
    }

    if(x == n + 1){// last and first elements are adjacent
        if(mark[arr[n] + 1] == false)
            return;

        for(int i = 1; i <= n; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
    }

    for(int i = 2; i <= n; i++){
        if(!vis[i]){
            arr[x] = i;
            vis[i] = true;
            dfs(x + 1);
            vis[i] = false;
        }
    }
}

void solve(){
    memset(vis, false, sizeof(vis));
    cin >> n;

    arr[1] = 1;

    dfs(2);
 
}
 
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    sieve();
    // cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case " << i << ": \n";
        solve();
    }
    
    return 0;
}