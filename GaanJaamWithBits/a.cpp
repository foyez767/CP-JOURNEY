#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1003;
int set_bits[N];

void precal() {
    set_bits[0] = 0;

    for (int i = 1; i < N; i++) {
        set_bits[i] = set_bits[i - 1] + __builtin_popcount(i);
    }
}

void solve(){
    int n; cin >> n;

    cout << set_bits[n] << "\n";
 
}
 
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    precal();
    cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}