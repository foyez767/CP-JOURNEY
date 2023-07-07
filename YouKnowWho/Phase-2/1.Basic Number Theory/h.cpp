//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define MAX 1000000
#define nn "\n"
#define yes "YES"
#define no "NO"
using namespace std;

void solve(){
    vector<bool> primes(MAX+10,true);
    primes[0]=primes[1]=false;
    for(ll i=2; i*i<=MAX; i++){
        if(primes[i]){
            for(ll j=i*i; j<=MAX; j+=i)
                primes[j]=false;
        }
    }
    // for(auto v: primes) cout<< v<<" ";
    ll n=0,x=0;             cin>> n;
    vector<ll> vec(n,0);
    for(auto &x: vec)   cin>> x;

    for(ll i=0; i<vec.size(); i++){
        x=ceil(sqrt(vec[i]));
        // if(vec[i]==1) cout<< no <<nn;
        if(x*x==vec[i] and primes[x])
            cout<< yes <<nn;      
        else cout<< no <<nn;
    }
 
 }
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    // cin>> t;
    while(t--)   solve();
    
    return 0;
}