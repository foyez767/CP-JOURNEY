//**********In the name of Allah, most Gracious and Merciful******
//Sep/22/2022 09:01UTC-6
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
    ll n=0,x=0,uni=0,dupli=0,temp=0;
    cin>>n;
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        cin>>x;
        mp[x]++;
        if(mp[x]>1) dupli++;
    }
    uni=mp.size();
 
    for(ll i=1;i<=n;i++){
        if(i<=(n-dupli))
            cout<<uni<<" ";
        else{
            uni++;
            cout<<uni<<" ";
        }  
    }   
    cout<<nn;
}
    return 0;
}