//**********In the name of Allah, most Gracious and Merciful******
//Sep/22/2022 04:40UTC-6
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
    ll n=0;
    cin>>n;
    if(n<2020) cout<<"NO"<<nn;
    else {
        ll a=n % 2020;
        n=n-a*2021;
        if(n<0) cout<<"NO"<<nn;
        else{
            (n%2020==0) ? cout<<"YES"<<nn : cout<<"NO"<<nn;
        }
    }
}
    
    return 0;
}