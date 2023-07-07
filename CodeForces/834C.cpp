#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll l,r,x,a,b;   cin >> l >> r >> x ;
    cin>> a >> b;

    if(a == b) cout << 0 << "\n";
    else if(abs(a-b) >= x) cout << 1 << "\n";
    else if(((a+x) <= r and (r-b) >= x)or ((a-l) >= x and (b-l) >= x)) cout << 2 << "\n";  
    else if((a+x) <= r and (r - l) >= x and (l+x) <= b) cout << 3 << "\n";
    else if((a-l) >= x and (r-l) >= x and (r-b) >= x) cout << 3 << "\n";
    else cout << -1 << "\n";
 
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