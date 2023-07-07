//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define lim 1000000
#define nn "\n"
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<ll> factor(lim+5,0);

    for(ll i=2; i<=lim; i++) factor[i]=i;
    for(ll i=2; i*i<=lim; i++){
        if(factor[i] == i){
            for(ll j=i*i; j<=lim; j+=i)
                factor[j]=i;
        }
    }

    ll x=0,n=0;
    while(1){
        cin>> n;
        x=n;
        if(n==0) break;
        set<ll> se;
        while(x != 1){
            se.insert(factor[x]);
            x/=factor[x];
        }
        cout<< n << " : "<<se.size() <<nn;
    }
    
    return 0;
}