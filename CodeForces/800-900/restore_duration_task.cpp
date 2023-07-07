//**********In the name of Allah, most Gracious and Merciful******
//Oct/15/2022 09:43UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    ll n=0,maxi=0,x=0;      cin>> n;
    vector<ll> start(n,0),finish(n,0);
    for(auto &x: start)     cin>> x;
    for(auto &x: finish)    cin>> x;

    for(ll i=0;i<n-1;i++){
        if(start[i+1]<finish[i])
            start[i+1]=finish[i];
    }
    for(ll i=0; i<n; i++){
        cout<<finish[i]-start[i]<<" ";
    }
    cout<< nn;
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}