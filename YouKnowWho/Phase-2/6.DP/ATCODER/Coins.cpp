#include<bits/stdc++.h>
#define ld long double
using namespace std;

const int N =3001;
ld p[N], memo[N][N];
int n;

ld rec(int i, int head, int tail){
    if(i == n + 1) return 1.00;
    if(memo[i][head] != -1.00){
        return memo[i][head];
    }
    ld ans = 0.00;
    if(head){
        ans += rec(i + 1, head - 1, tail) * p[i];
    }
    if(tail){
        ans += rec(i + 1, head, tail - 1) * (1.00 - p[i]);
    }

    memo[i][head] = ans;
return memo[i][head];
}

void solve(){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            memo[i][j] = -1.00;
        }
    }
    
    cin >> n;

    for(int i = 1; i <= n; i++) cin >> p[i];

    ld ans = 0.00;
    for(int i = (n / 2 + 1) ; i <= n; i++){
        ans += rec(1, i, n - i);
    }

    cout << setprecision(10) << fixed << ans << "\n";
 
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