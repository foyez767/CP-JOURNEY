//**********In the name of Allah, most Gracious and Merciful******
//Oct/06/2022 05:00UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n" 
using namespace std;
 
void solve(){
    ll n=0,k=0,max=0,x=0;       cin>>n >>k;
    vector<ll>vec;
    vector<bitset<31>>Bset;
    for(ll i=0;i<n;i++){
        cin>>x;
        vec.push_back(x);
        bitset< 31 >bset(x);
        Bset.push_back(bset);
    }
    for(ll i=30; i>=0 ; i--){
        ll req=0;
        for(ll j=0; j<vec.size();j++){
            if(Bset[j][i]==0) req++;
        }
        if(req<=k){
            k-=req;
            max+=(1<<i);
        }
    }
    cout<< (ll)max <<endl;
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}