//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll n=0,maxi=0,x=0;     cin>> n;
    vector<ll>vec;
    for(ll j=0; j<n ;j++){
        cin >>x;
        vec.push_back(x);
    }
    ll k=ceil((double)n/2);
    x=k;
    for(ll i=k; i<=n-1;i++){
        for(ll j=i+1;j<n; j++){
            if(__gcd(vec[j],vec[i])==1){
                    maxi=max(i+j+2,maxi);
            }
        }
    }
    for(ll i=k;i<n;i++){
        for(ll j=0; j<=x; j++){
            if(__gcd(vec[j],vec[i])==1){
                    maxi=max(i+j+2,maxi);
            }
        }
    }
    for(ll i=0;i<k;i++){
        for(ll j=0;j<k;j++){
            if(__gcd(vec[i],vec[j])==1){
                maxi=max(maxi,i+j+2);
            }
        }
    }

    (maxi==0) ? cout<< -1 <<nn : cout<< maxi<<nn;
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}