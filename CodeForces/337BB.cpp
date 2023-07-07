#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n,q,x;   cin >> n;
    vector<ll> vec(n,0);

    for(auto &x : vec) cin >> x;

    sort(vec.begin(),vec.end());

    cin >> q;
    while(q--){
        cin >> x;
        cout << upper_bound(vec.begin(),vec.end(),x) - vec.begin() << "\n";
    }
 
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