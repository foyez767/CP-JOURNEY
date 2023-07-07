//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define lim 1000000
#define MAX 1000000000000
#define nn "\n"
using namespace std;
 
vector<ll> factor(lim+3,0);
vector<bool> primes(lim+5,true);

void solve(){
    ll n=0,x=0,ans=1;     cin>> n;
    
    map<ll,ll>npf;
    while(n != 1){
        if(n*n>MAX and primes[x])
            break;
        x= factor[n];
        npf[factor[n]]++;
        n/=x;
    }
    npf[n]++;
    vector<ll> div;

    for(auto m: npf){
        div.push_back(m.second+1);
    }

    for(ll i=0; i<div.size(); i++)
        ans*=div[i];

    cout<< ans -1 <<nn;
 }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;

    primes[0] = primes[1]= false;
    for(ll i=2; i*i<=lim; i++){
        if(primes[i]){
            for(ll j= i*i; j<=lim; j+=i)
                primes[j]= false;
        }
    }

    for(ll i=2; i<=lim; i++) factor[i]= i;
    for(ll i= 2; i*i<=lim; i++){
        if(factor[i] == i){
            for(ll j= i*i; j<=lim; j+=i)
                factor[j]= i;
        }
    }

    cin>>t;
    // while(t--)   solve();
    for(ll i=1; i<=t; i++){
       cout<<"Case "<<i<<": ";
        solve();
    }
    
    return 0;
}