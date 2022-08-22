//Aug/17/2022 07:33UTC- :1611B
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll a=0,b=0,t=0;
    cin>>t;
    while(t--){
     cin>>a>>b;
     ll mini=min(a,b);
     ll x=((a+b)/4);
     (mini<x)? cout<<mini<<nn : cout<<x<<nn;
    }
    
    return 0;
}