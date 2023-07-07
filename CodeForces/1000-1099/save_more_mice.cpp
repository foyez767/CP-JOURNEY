//**********In the name of Allah, most Gracious and Merciful******
//Oct/19/2022 22:30UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    ll n=0,k=0,cnt=0,ans=0,x=0;         cin>> n>> k;
    vector<ll>vec(k,0),prefix(k,0),diff(k,0);
    for(auto &x: vec)                   cin>> x;
    sort(vec.begin(),vec.end());

    for(ll i=vec.size()-1;i>=0;i--)
         diff[i]=n-vec[i];
    
    sort(diff.begin(),diff.end());

    partial_sum(diff.begin(),diff.end(),prefix.begin());

    ans=lower_bound(prefix.begin(),prefix.end(),n)-prefix.begin();

    cout<< ans <<nn;
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}