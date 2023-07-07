#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
    ll xr;   cin>> xr;
    ll sum = 2 * xr;

    ll a = (sum - xr) / 2;
    ll b = a ^ xr;

    if(a != ((sum - xr)/2.0)) cout << -1 << "\n";
    else if (xr == 0) cout << -1 << "\n";
    else if(sum != a+b) cout << -1 << "\n";
    else cout << a << " " << b << "\n";
 }

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}