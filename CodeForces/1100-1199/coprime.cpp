//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

vector<ll>coprime [1010];

void solve(){
    ll n=0,ans=0;       cin>> n;
    vector<ll> vec(n+1,0),maxIndex(1001,0);
    
    for(ll i=1; i<=n; i++){
        cin>> vec[i];
        maxIndex[vec[i]]=i;
    }

    for(ll i=1; i<=1000; i++)
    {
        if(maxIndex[i]==0) continue;

        if(i==1){
          ans= max(ans,2*maxIndex[i]);  
          continue;
        } 

        for(auto p: coprime[i])
        {
            if(maxIndex[p]!=0){
                ans= max(ans, maxIndex[i]+maxIndex[p]);
            }
        }
    }

    (ans==0) ? cout<< -1 <<nn : cout<< ans <<nn;
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
for(ll i=1; i<=1000; i++){
    for(ll j=1; j<=1000; j++){
        if(__gcd(i,j)==1)
            coprime[i].push_back(j);
    }
}
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}