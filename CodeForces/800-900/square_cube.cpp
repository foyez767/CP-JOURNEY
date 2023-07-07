//**********In the name of Allah, most Gracious and Merciful******
//Oct/20/2022 12:14UTC-6
#include<bits/stdc++.h>
#define ll long long
#define MAX 1e9+2
#define nn "\n"
using namespace std;

void solve(){
    //approach: 01
    // ll n=0,cnt=0;     cin>> n;
    // vector<bool>vec(n+2,true);

    // for(ll i=1; i*i<=n; i++){
    //     if(vec[i*i]){
    //         cnt++;
    //         vec[i]=false;
    //     }
    // }
    // for(ll i=1; i*i*i<=n; i++){
    //     if(vec[i*i*i]){
    //         cnt++;
    //         vec[i]=false;
    //     }
    // }
    // cout<< cnt <<nn;
    //**approach 2: 02
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
while(t--)   solve();
    
    return 0;
}