//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define lim 100
#define nn "\n"
using namespace std;

vector<ll> factor(lim+5,0);
map<ll,map<ll,ll>> mp ;

void sieve(){
    for(ll i=2; i<=lim; i++) factor[i]= i;
    for(ll i=2; i*i<=lim; i++){
        if(factor[i] = i){
            for(ll j= i*i; j<=lim; j+=i)
                factor[j] = i;
        }
    }
}

void precompute(){
    ll x=0;
    for(ll i=2; i<=lim; i++){
        x = i;
        map<ll,ll> mm;
        while(x!=1){
            mm[factor[x]]++;
            x/=factor[x];
        }
        mp[i]=mm;
    }
}

void solve(){
    ll n=0,x=0,y=0,p=0,sum=0,lpf=0,gpf=0,w=0,sig=0,nod=0,sod=0;         cin>> n;
    vector<ll> vec(n,0);
    for(auto &x: vec)   cin>> x;

    for(ll i=0; i<vec.size(); i++){
        map<ll,ll>m= mp[vec[i]];
        // x= vec[i];
        // y= mp[x].size();
        // lpf= mp[x];
        // gpf= mp[x][y-1];
        for(auto c: m)
            cout<< c.first <<" "<< c.second<<nn;
        
    }


 
 }
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    // cin>>t;
    sieve();
    precompute();




    while(t--)   solve();
    
    return 0;
}