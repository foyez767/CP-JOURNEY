#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
    ll w,x,y;   cin>> w;
    
    if(w % 2) cout<< "Impossible\n";
    else{
        ll a = 0, b = 0;
        for(ll i = 2; i <= w; i*=2){
            a = i;
            b = w / i;

            if(b % 2 ) break;
        }
        
        cout<< b << " " << a << "\n";
    }
 
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    for(ll i = 1; i<=t; i++){
        cout<< "Case " << i << ": ";
        solve();
}
    
    return 0;
}