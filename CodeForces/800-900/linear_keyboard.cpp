//**********In the name of Allah, most Gracious and Merciful******
//Oct/04/2022 20:54UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll x=0,ti=0,init=0,y=0;
    string key,s;
    cin>>key >>s;
    ll pos [27] {};
    for(ll i=0; i<key.length(); i++){
        x=(ll)(key[i]-96);
        pos[x]=i+1;
    }

    init=pos[(ll)(s[0]-96)];
    for(ll i=1; i<s.length(); i++){
        x=pos[(ll)(s[i]-96)];
        ti+=abs(init-x);
        init=x;
    }
    cout << ti <<nn;
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}