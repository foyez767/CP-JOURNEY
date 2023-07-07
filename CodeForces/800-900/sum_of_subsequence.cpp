//**********In the name of Allah, most Gracious and Merciful******
//Oct/06/2022 22:18UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    vector<ll>vec (7,0);
    for(ll i=0; i<7; i++) cin>> vec[i];
    cout<<vec[0]<<" "<< vec[1] <<" "<< vec[6]-vec[0]-vec[1] <<nn;
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}