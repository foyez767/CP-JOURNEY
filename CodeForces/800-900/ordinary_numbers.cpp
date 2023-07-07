//**********In the name of Allah, most Gracious and Merciful******
//Oct/07/2022 21:10UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll n=0,cnt=0,num=0;         cin>> n;
    vector<ll>vec;
    for(ll i=1; i<=9; i++){
        for(ll j=0; j<=8; j++){
            num+=(ll)(i*pow(10,j));
            if(num<=n) vec.push_back(num);
            else break;
        }
        num=0;
    }
    cout<< (ll)vec.size() <<nn;
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}