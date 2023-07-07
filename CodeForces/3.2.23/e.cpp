#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll Pos(ll n){
    if(n >= 0) return n;
return -1LL * n;
}

void solve(){
    ll n , sum = 0,neg = 0, maxNeg = 0;  cin >> n;
    vector<ll> vec(n,0);
    for(auto &x : vec)  cin >> x;

    for(ll i = 0; i < n; i++){
        sum += 1LL * abs(vec[i]);
        if(vec[i] <= 0) neg++;
        vec[i] = Pos(vec[i]);
    }

    sort(vec.begin(),vec.end());

    if(neg % 2) cout << sum - (2 * vec[0]) << "\n";
    else cout << sum << "\n";
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