//Aug/04/2022 21:02UTC-6 :230B
#include<bits/stdc++.h>
#define ll long long
#define a 1000000
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    ll num=0,x=0;
    cin>>num;
    //sieve of erastosthens for taking prime number square
    vector<bool>vec(a+1,true);
    set<ll>prime_sqr;
    vec[1]=false;
    for(ll i=2;i<=a;i++){
        if(vec[i]){
            prime_sqr.insert(i*i);
            for(ll j=i*i;j<=a;j+=i){
                vec[j]=false;
            }
        }
    }
    //for every number cheking if it is t-prime or not
    while(num--){
        x=0;
        cin>>x;
        auto it=prime_sqr.find(x);
        if(it != prime_sqr.end())
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}