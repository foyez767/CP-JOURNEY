#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n,q;   cin >> n;
    vector<ll> vec(n,0),cnter(1e5+1,0);
    for(auto &x: vec)   cin >> x;

    sort(vec.begin(),vec.end());

    ll x = 0;
    for(ll i = 0; i < n; i++){
        x++;
        cnter[vec[i]] = x;
    }
    x = 0;

    for(ll i = 0; i < cnter.size(); i++){
        if(cnter[i] == 0)
            cnter[i] = x;
        else x = cnter[i];
    }

    ll maxi = *(max_element(vec.begin(),vec.end()));
    cin >> q;
    while(q--){
        cin >> x;

        if(x >= maxi) cout << n << "\n";
        else cout << cnter[x] << "\n";
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