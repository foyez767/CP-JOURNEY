#include<bits/stdc++.h>
#define ll long long
#define a 10000000
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
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
    ll t=0;
    cin>>t;
    while(t--){
        ll n=0,flag=0;
        cin>>n;
    if(n%2 != 0)
        cout<<"YES\n";
    else{
        for(ll i=1;i<prime.size();i++){
            if(n%prime[i]==0){
                flag=1;break;
            }                
        }
        if(flag==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }    
}  
    return 0;
}