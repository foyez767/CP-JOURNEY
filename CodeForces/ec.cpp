#include<bits/stdc++.h>
#define ll long long
#define a 10000000
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    ll n=0;
    cin>>n;
   vector<bool>vec(a+1,true);
    vec[1]=false;
    vector<ll>prime;
    for(ll i=2;i<=a;i++){
        if(vec[i]){
            prime.push_back(i);
            for(ll j=i*i;j<=a;j+=i)
                vec[j]=false;
        }
    }
    std::sort(prime.begin(),prime.end());
    for(ll i=0;i<prime.size();i++)
        cout<<prime[i]<<" ";
        
    return 0;
}