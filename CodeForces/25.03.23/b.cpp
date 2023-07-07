#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int  n, batti = 0,gc = 0;  cin >> n;

    vector<int> vec(n, 0);
    for(auto &x : vec) cin >> x;

    sort(vec.begin(),vec.end());

    bool ok = false;
    gc = 0;

    for(int i = 0; i < n; i++){
        gc = 0;
        for(int j = i + 1; j < n; j++){
            gc = __gcd(vec[i],vec[j]);

            if(gc <= 2){
                ok = true;
                break;
            }
        }

        if(ok) break;
    }

    if(ok) cout << "YES\n";
    else cout << "NO\n";
 
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