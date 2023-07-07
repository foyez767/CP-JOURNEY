#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;

    vector<ll> vec (n, 0);

    for(auto &x : vec) cin >> x;

    ll total = 0, x = 0;

    for(int i = 0; i < n; i++){
        if(vec[i] != 0)
            x = max(x, vec[i]);
        else{
            total += x;
            x = 0;
        }
    }   

    cout << total << "\n";
 
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}