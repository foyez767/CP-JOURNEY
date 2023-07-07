#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;   cin >> n;
    vector<ll> vec(n,0);
    for(auto &x : vec)  cin >> x;

    ll maxi = *(max_element(vec.begin(),vec.end()));

    if(is_sorted(vec.begin(),vec.end())){
        cout << 0 << "\n";
        return;
    }
    for(ll i = 0; i < n; i++)
        vec[i] = abs(vec[i] - maxi + 1);
    
    if(is_sorted(vec.begin(),vec.end()))
        cout << maxi-1 << " \n";
    else cout << -1 << "\n";
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