//**********In the name of Allah, most Gracious and Merciful******
//Oct/24/2022 07:34UTC-6
#include<bits/stdc++.h>
#define ll long long
#define no "NO"
#define yes "YES"
#define nn "\n"
using namespace std;
 
void solve(){
    ll n=0,x=0;         cin>> n;
    vector<ll> vec(n,0),l(n,0);
    for(auto &x: vec)   cin>> x;
    l[n-1]=vec[n-1];
    for(ll i=vec.size()-1; i>0; i--)
    {
        l[i-1]=(vec[i]*vec[i-1])/__gcd(vec[i],vec[i-1]);
    }

    ll first= vec[0];
    if(__gcd(first,l[0])!= vec[0]){
        cout<< no <<nn;
        return;
    }
    for(ll i=1; i<l.size(); i++)
    {
        if(__gcd(l[i],l[i-1]) != vec[i]){
            cout<< no <<nn;
            return;
        }
    }
    cout<< yes <<nn;
 }

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}