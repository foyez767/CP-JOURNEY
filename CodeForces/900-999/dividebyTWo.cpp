//**********In the name of Allah, most Gracious and Merciful******
//Sep/21/2022 01:09UTC-6
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
    ll n=0,cnt=0;
    cin>>n; 
    if(n==1){
        cout<<0<<nn;
        continue;
    }
while(n){
    if(n%6==0){
        n/=6;
        cnt++;
    }else{
        n*=2;
        cnt++;
    }
    if(n==1){
        cout<<cnt<<nn;
        break;
    }
    if(n<1){
        cout<<-1<<nn;
        break;
    }
 }

}
     
    return 0;
}