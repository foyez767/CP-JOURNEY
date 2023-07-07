//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll n=0;     cin>> n;

    cout<< n/2 <<nn;
    if(n %2 !=0){
        n-=3;
        cout<< 3 <<" ";
    }
    for(ll i=1; i<=n/2; i++)
        cout<< 2 <<" ";
    cout<<nn;
 
 }
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    // cin>>t;
    while(t--)   solve();
    
    return 0;
}