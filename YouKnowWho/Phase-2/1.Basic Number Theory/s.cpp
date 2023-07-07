//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define lim 5000
#define MAX 1<<30
#define nn "\n"
using namespace std;

vector<ll> factor(lim+2,0);
 
void solve(){
    ll n=0,m=0,x=0,y=0,ans=MAX,flag=0;     cin>> m>> n;

    vector<ll> mp_n(lim+5,0),mp_m(lim+5,0);

    //factorization of n!
    for(ll i= n; i>=2; i--){
        x= i;
        while(x != 1){
            mp_n[factor[x]]++;
            x/=factor[x];
        }
    }

    //factorization of m
    while(m!=1){
        mp_m[factor[m]]++;
        m/=factor[m];
    }

    for(ll i=2; i<mp_m.size(); i++){
        if(mp_m[i]){
            x=mp_m[i], y=mp_n[i];
            if(x>y){
                cout<< "Impossible to divide"<<nn;
                return;
            }
            ans= min( ans, y/x);
        }
    }
    cout<< ans <<nn;
 
 }
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;

    for(ll i=2;  i<=lim; i++) factor[i]=i;
    for(ll i=2; i*i<=lim; i++){
        if(factor[i]==i){
            for(ll j=i*i; j<=lim; j+=i)
                factor[j]= i;
        }
    }

    cin>>t;
    // while(t--)   solve();
    for(ll i=1; i<=t; i++){
        cout<<"Case "<<i<<":"<<nn;
        solve();
    }
    
    return 0;
}