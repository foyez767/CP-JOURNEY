#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll a, b, c;     
    vector<ll>vec(3,0);
    for(auto &x : vec) cin >> x;

    sort(vec.begin(),vec.end());

    a = vec[0], b = vec[1], c = vec[2];

    if(a == b and b == c) cout << 0 << "\n";
    else if(a == b and c != b and (c - a) % 2 == 0) cout << (c - a) / 2 << "\n";
    else cout << -1 << "\n";
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}