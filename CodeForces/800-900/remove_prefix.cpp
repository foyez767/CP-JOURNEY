//**********In the name of Allah, most Gracious and Merciful******
//Sep/25/2022 18:27UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n" 
using namespace std;

  
void solve(){
    ll n=0,cnt= 0, x=0,i=0;
    cin>>n;
    ll arr[n] {};
    for( i=0;i<n;i++)    cin>>arr[i];
    
    set<ll>s;
    for(i=n-1;i>=0;i--){
        if(s.find(arr[i]) != s.end()) break;
        s.insert(arr[i]);
    }
    cout<< n-s.size()<<nn;
 
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