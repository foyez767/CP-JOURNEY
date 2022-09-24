#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
  
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=0;
cin>>t;
while(t--){
    ll n=0,maxi=0,x=0,cpy_cnt=0,a=0,b=0,cnt=0;
    cin>>n;
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        cin>>x;
        mp[x]++;
        if(mp[x]>maxi)
            maxi=mp[x];
    }
    while(maxi<n){
        cpy_cnt++;
        a=maxi;
        maxi*=2;
        cnt+=(maxi-a);
    }
    cout<<cpy_cnt+cnt+n-maxi<<nn;

}    
   return 0;
}