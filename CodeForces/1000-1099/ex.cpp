#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n,cnt = 0;   cin >> n;
    vector<ll>vec(n,0),two(n+1,0);
    for(auto &x : vec)  cin >> x;

    for(ll i = 0;  i < n; i++){
        if(vec[i] == 2){
            cnt++;
            two[cnt] = i+1;
        }
    }
    if(cnt == 0) cout << 1 << "\n";
    else if(cnt % 2) cout << -1 << "\n";
    else
        cout << two[cnt/2] << "\n";
    
 
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