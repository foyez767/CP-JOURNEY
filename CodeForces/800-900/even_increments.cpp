//**********In the name of Allah, most Gracious and Merciful******
//Sep/28/2022 21:51UTC
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
  
void solve(){
    ll n=0,odd=0,eve=0,x=0,y=0;
    cin>>n;
    ll arr[n+1] {};
    for(ll i=1; i<=n; i++){
        cin>> arr[i];
    }
    x=arr[1] % 2;
    y=arr[2] % 2;
    for(ll i=1; i<=n ;i++){
        if(i%2==1 and arr[i] % 2==x) odd++;
        if(i%2==0 and arr[i] %2==y) eve++;
    }
    if(n%2==0 and odd==n/2 and eve==n/2) cout<<"YES"<<nn;
    else if(n%2==1 and odd==(n+1)/2 and eve==n/2) cout<<"YES"<<nn;
    else cout<<"NO"<<nn;
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--){
    solve();
}
    
    return 0;
}