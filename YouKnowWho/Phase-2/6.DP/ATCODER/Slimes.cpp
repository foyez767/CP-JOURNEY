#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 403, inf = 1e15;
ll arr[N], pref[N], memo[N][N];

ll combine(int l, int r){
    if(l == r)
        return 0;

    if(memo[l][r] != -1){
        return memo[l][r];
    }

    ll ans = inf;
    for(int i = l; i < r; i++){
        ans = min(ans, combine(l, i) + combine(i + 1, r));
    }   
    ans += (pref[r] - pref[l - 1]);
    memo[l][r] = ans;
return memo[l][r];    
}

void solve(){
    int n; cin >> n;

    for(int i = 1; i <= n; i++) cin >> arr[i];

    //prefix sum
    for(int i = 1; i <= n; i++){
        pref[i] += pref[i - 1] + arr[i];
    }

    memset(memo, -1, sizeof(memo));

    cout << combine(1, n) << "\n";
 
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