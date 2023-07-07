#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, q; cin >> n >> q;

    vector<ll> vec(n+1, 0);
    for(int i = 1; i <= n; i++){
        cin >> vec[i];
    }
    
    partial_sum(vec.begin(), vec.end(), vec.begin());

    ll sum = vec[n];

    while(q--){
        ll l, r, k ; cin >> l >> r >> k;

        ll ans = sum - (vec[r] - vec[l - 1]) + (r - l + 1) * k;

        if(ans % 2) cout << "YES\n";
        else cout << "NO\n";
    }
 
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