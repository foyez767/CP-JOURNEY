#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, t, i =0;    cin >> n >> t;
    vector<ll> vec (n,0);
    for(ll i = 1; i < n; i++) cin >> vec[i];

    for(i = 1; i < vec.size(); i++){
        if(i == t){
            cout << "YES\n";
            return;
        }

        i = i + vec[i] - 1;
    }

    if(i == t) cout << "YES\n";
    else    cout << "NO\n";
 
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