//**********In the name of Allah, most Gracious and Merciful******
//Sep/22/2022 04:57UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);

ll n=0,m=0,day=0;
cin>>n>>m;
while(1){
    day++;
    if(day % m !=0) n--;

    if(n==0) break;
}
cout<<day<<nn;
    
    return 0;
}