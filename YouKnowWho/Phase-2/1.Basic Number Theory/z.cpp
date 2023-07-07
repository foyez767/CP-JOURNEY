//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

 
void solve(){
    ll n=0,ans=0;     cin>> n;

    n=(ll)sqrt(n);

    for(ll i=2; i*i<=n; i++){
        if( n % i==0){
            ans= max(i,ans);
            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n>1) ans= max(n,ans);

    cout<< ans <<nn;
 
 }
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    // cin>>t;
    while(t--)   solve();
    
    return 0;
}