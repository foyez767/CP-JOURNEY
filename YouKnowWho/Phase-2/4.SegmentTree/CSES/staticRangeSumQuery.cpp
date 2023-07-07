#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, q; cin >> n >> q;

    vector<ll> vec(n + 1, 0);
    for(int i = 1; i <= n; i++){
        cin >> vec[i];
    }

    partial_sum(vec.begin(),vec.end(),vec.begin());

    while(q--){
        int l, r; cin >> l >> r;
        cout << vec[r] - vec[l - 1] << "\n";
    }
 
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}