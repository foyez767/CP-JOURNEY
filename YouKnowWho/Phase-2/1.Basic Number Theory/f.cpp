//********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
#define nn "\n"
using namespace std;

void solve(){
    ll n=0,x=0,maxi=0,cnt=0;     cin>> n;
    vector<ll> vec(n,0);
    for(auto &x: vec)   cin>> x;

    for(ll i=1; i<=limit; i++){
        for(ll j=0; j<vec.size(); j++){
            if(vec[j]%i==0) cnt++;
        }
        cout<< cnt <<nn;
        cnt=0;
    }
    

 }
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    // cin>>t;
    while(t--)   solve();
    
    return 0;
}