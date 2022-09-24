//**********In the name of Allah, most Gracious and Merciful******
//Sep/19/2022 23:23UTC-6	
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
    ll n=0,k=0,p=0,x=0,maxi=0;
    map<ll,vector<ll>>mp;
    cin>>n>>k;
    for(ll i=0;i<n;i++){
    cin>>x;
    p=i%k;
    mp[p].push_back(x);
    }

    for(ll i=0;i<k;i++){
    maxi+=*(max_element(mp[i].begin(),mp[i].end()));
    }
    cout<<maxi<<nn;
    mp.clear();
}

    
    return 0;
}