//**********In the name of Allah, most Gracious and Merciful******
//Oct/18/2022 10:49UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    ll n=0;         cin>> n;
    if(n%2==0){
        for(ll i=1; i<=n;i+=2)
            cout<< i<< " ";
        for(ll i=n; i>=2; i-=2)
            cout<< i<< " ";
        cout<<nn;

    }else{
    for(ll i=1; i<=n; i+=2)
        cout<<i<<" ";
    for(ll i=2; i<=n; i+=2)
        cout<<i<<" ";
    cout<< nn;
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