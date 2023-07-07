//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll l=0,r=0;     cin>> l>> r;
    cout<< "YES" <<nn;
    for(ll i=l; i<=r; i+=2){
        cout<< i<<" "<<i+1<<nn;
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