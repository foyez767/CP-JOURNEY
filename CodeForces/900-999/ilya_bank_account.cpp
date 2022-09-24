//**********In the name of Allah, most Gracious and Merciful******
//Sep/20/2022 08:43UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
  
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll n=0,p=0,q=0,k=0,r=0;
cin>>n;
if(n>=0) cout<<n<<nn;
else{
    n=abs(n);
    p=n/10;
    while(n){
        if(r!=1){
            q+=((n%10)*pow(10,k));
            k++;
        }
        r++;
        n/=10;
    }
    if(p<q) cout<<-p<<nn;
    else cout<<-q<<nn;
}

    return 0;
}