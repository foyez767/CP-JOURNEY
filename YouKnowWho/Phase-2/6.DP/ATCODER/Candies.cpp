#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int mod = 1e9 + 7, N = 102, K = 1e5 + 1;

void solve(){
    int n, k; cin >> n >> k;

    int candi[n + 1] {};

    for(int i = 1; i <= n; i++){
        cin >> candi[i];
    }

    int ways[n + 1][k + 1];
    memset(ways, 0, sizeof(ways));
    ways[0][0] = 1;

    for(int i = 1; i <= n; i++){
        //prefix sum of previous row
        for(int j = 1; j <= k; j++){
            ways[i - 1][j] += ways[i - 1][j -1];
            ways[i - 1][j] %= mod;
        }
        
        for(int j = 0; j <= k; j++){
            ways[i][j] = ways[i - 1][j];
            //if some candy given to the students crossing his limit,we need to subtract this
            if(j - candi[i] > 0){
                ways[i][j] -= ways[i -1][j - candi[i] - 1];
                // ways[i][j] %= mod;
            }
            ways[i][j] = ((ways[i][j] % mod) + mod) % mod;
        }
    }

    cout << (ways[n][k] % mod) << "\n";
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