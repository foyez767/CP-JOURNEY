//**********In the name of Allah, most Gracious and Merciful******
//Oct/11/2022 12:03UTC-
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    ll n=0,a=0,b=0,mid=0;     cin>> n;
    if(n%2==0){
        for(ll i=n; i>0;i--){
            cout<<i<<" ";
        }
        cout<<nn;
    }else if(n==3) cout<<-1<<nn;
    else{
        mid=(n/2)+1;
        for(a=n; a>mid; a--)
            cout<<a<<" ";
        for(a=1; a<=mid;a++)
            cout<<a<<" ";
        cout<<nn;
    }

 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}