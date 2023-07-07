//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define lim 20000000
#define nn "\n"
using namespace std;

vector<bool> marks(lim+5,true);
vector<ll> primes;
vector<pair<ll,ll>>primePair;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    marks[0]=marks[1]=false;
    for(ll i=2; i*i<=lim; i++){
        if(marks[i]){
            for(ll j= i*i; j<=lim; j+=i)
                marks[j]=false;
        }
    }
    for(ll i=1; i<=lim; i++){
        if(marks[i])
            primes.push_back(i);
    }
    ll k=primes.size()-1,x=0;
    for(ll i=0; i<k;i++){
        if(primes[i+1]-primes[i]==2){
            primePair.push_back(make_pair(primes[i],primes[i+1]));
        }
    }

    while(scanf("%d",&x) != EOF){
        pair<ll,ll> p = primePair[x-1];
        cout<<"("<<p.first<<", "<<p.second<<")"<<nn;
    }
    
    
    return 0;
}