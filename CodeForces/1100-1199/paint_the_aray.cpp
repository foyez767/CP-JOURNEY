//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll n=0,d=0,gc_od=0,gc_ev=0,flag=0;         cin>>n;
    ll arr[n+1] {};
    for(ll i=1; i<=n; i++)  cin>> arr[i];
    // gc_od=arr[1]; gc_ev=arr[2];
    for(ll i=1; i<=n; i+=2){
        gc_od=__gcd(gc_od,arr[i]);
    }
    for(ll i=2 ; i<=n;i+=2){
        if(arr[i]%gc_od==0){
            flag=1; break;
        }
    }
    if(flag) cout<< 0 <<nn;
    else cout<< gc_od <<nn;
    // if(gc_od==gc_ev) cout<< 0 <<nn;
    // else if(gc_ev==1 or gc_od==1) cout<< 0 <<nn;
    // else cout<< max(gc_ev,gc_od) <<nn;
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
// cin>>t;
while(t--)   solve();
    
    return 0;
}