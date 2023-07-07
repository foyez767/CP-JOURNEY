#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, m, a, b, x, y;    cin>> n >> m;
    
    x = m;
    y = m + 1;
    if(m % 2){
        x = m + 1;
        y = m;
    }

    a = - ((x / 2) * (y ));
    b = (m * (2*m + 1)) + a;

    ll sum = a + b;
    cout<< ((n / (2*m)) * sum)<< "\n";
 
 }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    for(ll i = 1; i<=t; i++){
        cout << "Case " << i << ": ";
    solve();
}
    
    return 0;
}