//Sep/19/2022 09:47UTC-6
#include<iostream>
#define ll long long
#define nn "\n"
using namespace std;

  
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=0;
cin>>t;
while(t--){
    ll n=0;
    cin>>n;
    ll arr[n]{};
    for(ll i=0;i<n;i++) cin>>arr[i];
    ll x=arr[0];
    for(ll i=1;i<n;i++){
        x&= arr[i];
    }
    cout<<x<<nn;
}
    
    return 0;
}