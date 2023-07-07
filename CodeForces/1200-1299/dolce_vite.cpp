//**********In the name of Allah, most Gracious and Merciful******
//Oct/25/2022 23:07UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll n=0,day=0,total=0,x=0,a=0,pack=0,cur=0,i=0;       cin>> n>> x;
    vector<ll>vec(n,0),prefix(n,0);
    for(auto &x: vec)   cin>> x;
    sort(vec.begin(),vec.end());
    partial_sum(vec.begin(),vec.end(),prefix.begin());
   
   while(i<n and prefix[i]<=x)
   {
        day=((x-prefix[i])/(i+1))+1;
        pack+=(day*(i+1));
        pack-=(day*i);
    i++;
   }
   cout<< pack <<nn;
 }
 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}
