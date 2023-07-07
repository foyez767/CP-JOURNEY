#include<bits/stdc++.h>
#define inf -1
#define ll long long
using namespace std;

const ll N = 1e6 + 7, mod = 1e9 + 7;
ll ways[N];

ll count(int n){
    if(n < 0)  return -1;
    if(n == 0) return 1;
    if(n == 1) return 1;
    if(n == 2) return 2;
    if(n == 3) return 4;

    if(ways[n] != -1)
        return ways[n];

    ll ans = 0,ans2 = 0;
    for (int i = 1; i <= 6; i++) {
        ans2 = count(n - i);
        if(ans2 != inf){
            ans += ans2;
            ans %= mod;
        }
    }
    ways[n] = ans;
return ways[n];
}

void solve(){
    memset(ways, -1, sizeof(ways));
    int n; cin >> n;

    cout << (count(n) % mod) << "\n";
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