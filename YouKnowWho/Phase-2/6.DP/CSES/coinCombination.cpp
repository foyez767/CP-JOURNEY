//clue:: How to construct n by using some given numbers
#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 102, X = 1e6 + 7, mod = 1e9 + 7;
ll inf = 1e17;
int arr[N], n, x;
ll ways[X];

ll count(int sum){
    if(sum < 0)
        return inf;
    if(sum == 0)
        return 1;
    if(ways[sum] != -1){
        return ways[sum];
    }
    ll ans = 0, ans2 = 0;
    for(int i = 1; i <= n; i++){
        ans2 = count(sum - arr[i]);
        if(ans2 < inf){
            ans = (ans + (ans2 % mod)) % mod;
        }
    }
    ways[sum] = max(ways[sum], ans);
return ways[sum];
}

void solve(){
    memset(ways, -1, sizeof(ways));
    cin >> n >> x;

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    cout << count(x) << endl;
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