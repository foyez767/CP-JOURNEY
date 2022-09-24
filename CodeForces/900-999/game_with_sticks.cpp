//**********In the name of Allah, most Gracious and Merciful******
//Sep/20/2022 00:40UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll n=0,m=0,cnt=0;
cin>>n>>m;
while(1){
    n--;
    m--;
    cnt++;
    if(n==0||m==0) break;
}
(cnt%2!=0) ? cout<<"Akshat"<<nn : cout<<"Malvika"<<nn;
    
    return 0;
}