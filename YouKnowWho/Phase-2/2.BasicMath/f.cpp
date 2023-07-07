#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n ,ans = INT64_MAX,batti = 1 ;     cin >> n;
    vector<ll>font(n,0),cost(n,0);
    for(auto &x : font)     cin >> x;
    for(auto &x : cost)     cin >> x;

    for(ll j = 1; j < n-1; j++){
        ll a = 0, b =0,ans2 = INT64_MAX,ans3 = INT64_MAX;
        for(ll k = j + 1; k < n; k++){
            if(font[k] > font[j]){
                a = 1;
                ans2 = min(ans2,cost[k]);
            }
        }

       for(ll p = j -1; p >= 0; p--){
            if(font[j] > font[p]){
                b = 1;
                ans3 = min(ans3,cost[p]);
            }
       }
        if(a == 1 && b == 1){
            batti = 0;
            ans = min(ans,ans2+ans3+cost[j]);
        }
    }


    
    if(batti) cout << -1 << "\n";
    else cout << ans << "\n";
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    // cin >> t;
    for(ll i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}