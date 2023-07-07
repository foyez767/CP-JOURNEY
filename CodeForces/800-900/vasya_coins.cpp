//**********In the name of Allah, most Gracious and Merciful******
//Sep/30/2022 18:25UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    ll a=0,b=0;
    cin>>a >>b;
    if((a==0 and b==0) or a==0) cout<<1<<nn;
    else if(b==0) cout<<a+1<<nn;
    else cout<<b*2+a*1+1<<nn; 
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}