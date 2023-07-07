//**********In the name of Allah, most Gracious and Merciful******
//Oct/14/2022 08:51UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll n=0,k=0,x=0,q=0,maxi=0;      cin>> n>> q;
    vector<ll>vec(n,0);
    for(auto &x: vec)               cin>> x;

    vector<ll>prefix(n+1,0);
    partial_sum(vec.begin(),vec.end(),prefix.begin()+1);

    vector<ll>pos;
    for(auto v: vec){
        maxi=max(maxi,v);
        pos.push_back(maxi);
    }

    while(q--){
        cin>> x;
        k=upper_bound(pos.begin(),pos.end(),x)-pos.begin();
        cout<< prefix[k] <<" ";
    }
    cout << nn;
 }

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}