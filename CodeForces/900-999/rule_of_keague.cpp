//**********In the name of Allah, most Gracious and Merciful******
//Sep/20/2022 07:50UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn  "\n" 
using namespace std;
  
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=0;
cin>>t;
while(t--){
    ll n=0,x=0,y=0;
    cin>>n>>x>>y;
    if((x==0 && y==0) or (min(x,y)!=0) or ((n-1)% max(x,y) !=0))
        cout<<-1<<nn;
    else{
        ll cnt=0;
        if(x<y) x=y;
        for(ll i=2;i<=n;i++){
            while(cnt!=x){
                cout<<i<<" ";
                cnt++;
            }
            i=max(x,y)+i-1;
            cnt=0;
        }
    cout<<nn;
    }
}
    
    return 0;
}