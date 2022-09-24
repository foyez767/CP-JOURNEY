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
    ll l=0,r=0,a=0,pp=0,qq=0,mod=0;
    cin>>l>>r>>a;
    pp=(r/a)+(r%a);
    if((r-r%a-1)>=l){
        r=r-r%a-1;
        qq=r/a+r%a;
    }else{
        qq=r/a+r%a;
    }
    cout<<max(pp,qq)<<nn;
} 
    
    return 0;
}