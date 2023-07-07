
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    ll n,maxA = 0, maxB =0;       cin>> n;

    for(ll i = 1; i*i <= n; i++){
        if(n % i == 0){
            if(__gcd(i,n/i)==1){
                maxA = i, maxB = n/i;
            }
        }
    }

    cout<< maxA << " " << maxB <<nn;
 }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    // cin>>t;
    while(t--)   solve();
    
    return 0;
}