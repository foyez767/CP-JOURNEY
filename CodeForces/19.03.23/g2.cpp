#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 2e5 + 7;
vector<ll> mark(N, 0);


void solve(){
    ll n; cin >> n;
    vector<ll> vec(n, 0), vec2(n, 0);

    ll one = 0;
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        vec[i] = x;
        vec2[i] = x;
        if(x == 1) one++;
    }
    if((n == 1 and one == 0) or (n > 1 and one < 2)){
        cout << "NO\n";
        return;
    }

    sort(vec.begin(),vec.end());
    sort(vec2.begin(),vec2.end());

    partial_sum(vec.begin(),vec.end(), vec.begin());

    ll maxi = vec[0];

    for(ll i = 0; i < n; i++){
        if(maxi < vec2[i]){
            cout << "NO\n";
            return;
        }else{
            maxi = vec[i];
        }
    }

    cout << "YES\n";
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