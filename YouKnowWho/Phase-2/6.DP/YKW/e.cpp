#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 105;
ll dp[N][N],weight[N],val[N], W, n;


void solve(){
    cin >> n >> W;

    for(int i = 1; i <= n; i++){
        cin >> weight[i] >> val[i];
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