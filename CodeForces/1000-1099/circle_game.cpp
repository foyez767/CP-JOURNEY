//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll n=0,x=0;         cin>> n;
    vector<ll> vec(n),prefix(n,0);
    for(auto &x: vec)   cin>> x;

    // partial_sum(vec.begin(),vec.end(),prefix.begin());

    if(n%2) cout<<  "Mike" <<nn;
    else cout<<  "Joe"  <<nn;
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}