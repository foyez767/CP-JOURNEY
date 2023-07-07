//**********In the name of Allah, most Gracious and Merciful******
//Oct/17/2022 11:14UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    ll n=0,x=0,ans=1;         cin>> n;
    vector<ll>vec(n);
    for(auto &x: vec)   cin>> x;
    n=10-n;
    x=n-2;
    while(n!=x){
        ans*=n;
        n--;
    }
    cout<< (ll)(ans/2)*6 <<nn;
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}