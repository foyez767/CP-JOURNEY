#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n,maxi = 0,batti = 0;   cin >> n;
    vector<ll> vec(n,0);
    for(auto &x : vec)  cin >> x;

    if(n == 1){
        cout << 1 << "\n";
        return;
    }

    maxi = *(max_element(vec.begin(),vec.end()));
    vector<ll>pfcnt(maxi+1,0);

    for(ll i = 0; i < n; i++){
        ll x = vec[i], y = 0;
        for(ll j = 2; j * j <= x; j++){
            batti = 0;
            while(x % j == 0){
                x /= j;
                batti = 1;
            }
            if(batti == 1)
                pfcnt[j]++;
        }
        if(x > 1)
            pfcnt[x]++;
    }
    maxi = 0;
    for(ll i = 0; i < pfcnt.size(); i++){
        maxi = max(maxi,pfcnt[i]);
    }
    if(maxi == 0) cout << 1 << "\n";
    else cout << maxi << "\n";
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