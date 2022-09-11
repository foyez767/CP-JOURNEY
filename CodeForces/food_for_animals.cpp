//Sep/08/2022 18:30UTC-6
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
    ll a=0,b=0,c=0,x=0,y=0;
    cin>>a>>b>>c>>x>>y;
    x-=a;
    y-=b;
    if(x<0) x=0;
    if(y<0) y=0;
    (c>=(x+y))? cout<<"YES"<<nn : cout<<"NO"<<nn;
}  
    return 0;
}