//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

  
void solve(){
   ll n=0;      cin>> n;
   set<ll> s;
   for(ll i=1; i<=n; i++){
    if(i*i<=n) s.insert(i*i);
    else break;

    if(i*i*i<=n) s.insert(i*i*i);
   }
   cout << s.size() <<nn;
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)  solve();
   
  return 0;
}