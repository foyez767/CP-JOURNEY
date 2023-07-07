#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 202, D = 21, M = 11;
int memo[N][D][M], n, arr[N];

int count(int i, int d, int m){
    int ans = 0;
    ans = arr[i] + count(i + 1, d, m - 1);

    ans = count(i + 1, d, m);
}

void solve(){
    cin >> n;

    for(int i = 1; i <= n; i++) cin >> arr[i];
}
 
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}