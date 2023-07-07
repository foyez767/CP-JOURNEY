#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

vector<double>vec(limit+1,0);

void memorize(){
    for(ll i = 1; i <= limit; i++){
        vec[i] = log10(i);
    // }
    // for(ll i = 1; i <= limit; i++){
        vec[i] = (double)(vec[i-1] + vec[i]);
    }
}

void solve(){
    ll n,b;     cin >> n >> b;

    double ans = 0;
    // if(n <= limit) ans = vec[n];
    // else{
    //     ans = vec[limit];
    //     for(ll i = limit+1; i <= n; i++)
    //         ans += log10(i);
    // }

    ans = vec[n] / log10(b);

    cout << (ll)ans + 1 << "\n";
 
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    memorize();
    cin >> t;
    for(ll i = 1; i <= t; i++){
        cout << "Case " << i << ": ";
        solve();
    }
    
    return 0;
}