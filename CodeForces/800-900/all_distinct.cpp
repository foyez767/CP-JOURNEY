//**********In the name of Allah, most Gracious and Merciful******
//Sep/27/2022 08:37UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    ll n=0,x=0,flag=0,j=0,uni=0,odd=0,eve=0;
    cin>>n;
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        cin>>x;
        mp[x]++;
        if(mp[x]>=2) flag=1;
    }
   
    if(flag==1){
        for(auto m: mp){
            if((m.second)%2 == 1) odd++;
            else if(m.second %2 ==0) eve++;
        }
        (eve % 2==0) ? cout<<odd+eve <<nn : cout<<odd+eve-1<<nn;

    } else{
        cout<< n <<nn;
    }
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--){
solve();
}
    
    return 0;
}