//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
  ll n=0;
  string s = "Timru",st;
  cin>> n>> st;
  sort(st.begin(),st.end());
  if(s==st) cout<< "YES" <<nn;
  else cout<< "NO" <<nn;
 
 }
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t=1;
  cin>>t;
  while(t--)   solve();
  
  return 0;
}