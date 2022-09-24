//**********In the name of Allah, most Gracious and Merciful******
//Sep/20/2022 09:16UTC-6
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
    ll n=0,x=0,k=2,p=0;
    cin>>n;
    while(1){
        p=pow(2,k)-1;
        if(n%p==0){
            cout<<n/p<<nn;
            break;
        }
        k++;
    }
}     
    return 0;
}