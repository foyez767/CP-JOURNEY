#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n,maxi = 0,l = 1;   cin >> n;
  
    for(ll i = 2; i * i <= n; i++){
        if(n % i == 0){
            ll cnt2 = 0;
            while(n % i == 0){
                n /= i;
                cnt2++;
            }
            maxi = max(maxi,cnt2);
        }
    }
    if(n > 1)
         maxi = max(maxi,l);
         
    if(maxi == 0) maxi = 1;

    cout << maxi << "\n";
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    for(ll i = 1; i<=t; i++){
        solve();
    }
    
    return 0;
}