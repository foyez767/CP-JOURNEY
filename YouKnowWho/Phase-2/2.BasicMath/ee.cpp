#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll x , y;   cin >> x >> y;
    double a = y * log10(x), b = x * log10(y);

    double ans = a / b;
    if(ans < double(1)) cout << "<\n";
    else if(ans > double(1)) cout << ">\n";
    else cout << "=\n";
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