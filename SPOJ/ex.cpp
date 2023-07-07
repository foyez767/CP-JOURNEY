//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define q 1000000
// #define n 10000000000000000
#define nn "\n"
using namespace std;

vector<bool> primes(q,true);

void solve(){
    ll n=0,k=0,cnt=0,temp_n=0;     cin>> n>> k;
    temp_n=n;
    vector<ll> cnter (q,0);
    for(int i=2;i*i<=n;i++){
        if(primes[i]==true and n%i==0){
            cnt=0;
            while(n%i==0){
                cnt++;
                n/=i;
            }
            cnter[i]=cnt;
        }
    }
    if(n>1) cnter[n]=1;
    for(ll i=1; i<=temp_n;i++){
        cout<< i<<": "<<cnter[i]<<nn;
    }
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
// cin>>t;
primes[0]=primes[1]=false;

for(ll i=2; i*i<=q; i++)
{
    if(primes[i]==true)
    {
        for(ll j=i*i; j<=q; j+=i)
            primes[j]=false;
    }
}
while(t--)   solve();
    
    return 0;
}