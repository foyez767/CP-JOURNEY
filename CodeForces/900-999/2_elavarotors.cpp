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
    ll a=0,b=0,c=0;
    cin>>a>>b>>c;
    if(a==1) a=0;
    if(a>1) a=abs(a-1);
    if(b>=1) b=abs(b-c)+abs(c-1);

    if(a==b) cout<<3<<nn;
    else if(a<b) cout<<1<<nn;
    else cout<<2<<nn;
    
}
    
    return 0;
}