#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
   ll n,alice = 0, bob = 0;    cin >> n;
   ll x = (-1 + sqrt(1+8*n))/2;
   ll bo = x /2 , ali = x - bo;
  
    if(ali % 2 ==0){
        ali /= 2;
        alice = ali * (2 + (ali - 1)*8);
    }else{
        alice = ((2 * (ali - 1)*8) / 2) * ali;
    }

    if(bob % 2 ==0){
        bob /= 2;
        bob = bo * (10 + (bo - 1)*8);
    }else{
        bo = ((10 * (bo - 1)*8) / 2) * bo;
    }
    if(x % 2 == 0){
        alice += (n - alice - bob);
    }else{
        bob += (n - alice - bob);
    }
   cout << alice << " " << bob << "\n";
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