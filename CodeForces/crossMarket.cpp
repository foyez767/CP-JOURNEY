#include<bits/stdc++.h>
#define ll long long
#define nn  "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    ll n=0,m=0,min=0,max=0,temp=0;
    ll t=0;
    cin>>t;
    while(t--){
        cin>>n>>m;
    if(n==1 && m==1)
        cout<<temp<<nn;
    else if(n>m){
        max=n;min=m;
        cout<<(max+(2*min)-2)<<nn;
    }else{
        max=m;min=n;
        cout<<(max+(2*min)-2)<<nn;
    }
    }
    return 0;
}