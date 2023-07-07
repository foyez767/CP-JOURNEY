//**********In the name of Allah, most Gracious and Merciful******
//Oct/27/2022 23:03UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    //***better approach***
//     ll n=0,flag=0,cnt=0,cost=0,gc=0;     cin>> n;
//     vector<ll> vec(n,0);
//     for(auto &x: vec)   cin>> x;

//     for(ll i=0; i<vec.size(); i++){
//         gc=__gcd(vec[i],gc);
//     }

//     if(gc>1){
//         if(__gcd(gc,n)==1) cost=1;
//         else if(__gcd(gc,n-1)==1) cost=2;
//         else cost=3;
//     }
//    cout<< cost <<nn;
    ll n=0,flag=0,cnt=0,cost=0,gc=0;     cin>> n;
    vector<ll> vec(n,0);
    for(auto &x: vec)   cin>> x;

    if(n==1){
        if(vec[0]==1) cout<< 0 <<nn;
        else cout<< 1 <<nn;
        return;
    }

    gc= __gcd(vec[0],vec[1]);
    if(gc==1){
        cout<< 0 <<nn;
        return;
    }
    for(ll i=2; i<vec.size(); i++){
        gc=__gcd(vec[i],gc);
        if(gc==1){
            cout<< 0 <<nn;
            return;
        }
    }

    gc=__gcd(vec[n-1],n);
    for(ll i=0; i<n-1; i++){
        gc=__gcd(gc,vec[i]);
        if(gc==1){
            cout<< 1 <<nn;
            return;
        }
    }
    
    gc=__gcd(vec[n-2],n-1);
    for(ll i=0; i<n; i++){
        if(i==n-2) continue;
        gc=__gcd(gc,vec[i]);
        if(gc==1){
            cout<< 2 <<nn;
            return;
        }
    }

    cout<< 3 <<nn;
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}