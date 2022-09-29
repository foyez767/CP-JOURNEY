//**********In the name of Allah, most Gracious and Merciful******
//ep/28/2022 09:52UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll x=0,y=0,a=0,b=0;
    cin>>x >>y;
    if(x>y || y%x!=0 ) cout<<a<<" "<<b<<nn;
    else if(y%x==0){
        a=1;
        b=y/x;
        cout<<a<<" "<<b<<nn;
    }else cout<<a<<" "<<b<<nn;
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--){
solve();
}
    
    return 0;
}