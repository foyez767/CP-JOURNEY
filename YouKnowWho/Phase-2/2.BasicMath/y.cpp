#include<bits/stdc++.h>
#define ll long long
#define MAX 1e18
using namespace std;

ll calculateTrailZero(ll n){
    ll cnt = 0;
    for(ll i = 5; i <= n; i *= 5)
        cnt += (n/i);
return cnt;
}

void solve(){
    ll ans = -1, q, lo = 1, hi = MAX,mid = 0,cnt = 0;   cin >> q;

    while(lo <= hi){
        mid = (lo + hi) / 2;

        cnt = calculateTrailZero( mid );

        if(cnt > q)
            hi = mid - 1;
        else if(cnt < q) lo = mid+1;
        else{
            ans = mid;
            hi = mid - 1;
        }
    }

    if(ans == -1) cout << "impossible\n";
    else cout << ans << "\n";
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++){
        cout << "Case "<< i << ": ";
        solve();
    }
    
    return 0;
}