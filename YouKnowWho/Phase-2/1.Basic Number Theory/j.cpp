//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define MAX 100000000
#define nn "\n"
using namespace std;

void solve(){
    vector<bool> primes(MAX+3,true);
    primes[0]=primes[1]=false;

    for(ll i=2; i*i<=MAX; i++){
        if(primes[i]){
            for(ll j=i*i; j<=MAX; j+=i)
                primes[j]=false;
        }
    }
    
    ll cnt=0;
    for(ll i=2; i<=MAX; i++){
        if(primes[i])
            cnt++;
        else continue;

        if(cnt % 100 ==1){
            cout<< i <<nn;
        }
    }
 }
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    // cin>>t;
    while(t--)   solve();
    
    return 0;
}