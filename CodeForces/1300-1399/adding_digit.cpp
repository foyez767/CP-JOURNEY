//**********In the name of Allah, most Gracious and Merciful******
//Oct/08/2022 11:58UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    ll a=0,b=0,n=0,x=0,p=0,q=0,dig=0;     cin>> a>> b>> n;

    p=a;
    for(ll i=0; i<=9; i++){
        x=a*10+i;
        if(x % b==0){
            a=x;
            break;
        }       
    }
    if(p==a) cout<< -1 <<nn;
    else {
        cout<<a;
        for(ll i=1;i<=n-1;i++)
            cout<<0;
        cout<<nn;
    }
    
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
// cin>>t;
while(t--)   solve();
    
    return 0;
}