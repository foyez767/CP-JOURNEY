//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define MAX 1000000
#define nn "\n"
using namespace std;

vector<bool> primes(MAX+2,true);
vector<ll> afraid(MAX+2,0);
vector<ll> prefix(MAX+2,0);
 
void solve(){
    ll n=0;     cin>> n;

    cout<< prefix[n] <<nn;
 }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1,x=0;

    primes[0]=primes[1]=false;
    for(ll i=2; i*i<=MAX; i++){
        if(primes[i]){
            for(ll j=i*i; j<=MAX; j+=i)
                primes[j]=false;
        }
    }

    for(ll i=1; i<=MAX; i++){
        if(primes[i]){
            ll c_num=0,k=0,flag=0,batti=0;
            x=i;
            string s=to_string(x);
            for(ll i=0; i<s.length(); i++){
                if(s[i]=='0'){
                    batti=1;
                    break;
                }
            }
            if(batti==1) continue;
           while( x!=0){
                ll dig=x % 10;
                x/=10;
                c_num+=((ll)(pow(10,k))*dig);
                if(!primes[c_num]){
                    flag=1;
                    break;
                }
                k++;    
           }
           if(flag==0) afraid[i]=1;
        }
    }

    partial_sum(afraid.begin(),afraid.end(),prefix.begin());

    cin>>t;
    while(t--)   solve();
    
    return 0;
}