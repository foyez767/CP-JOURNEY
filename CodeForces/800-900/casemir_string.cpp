//**********In the name of Allah, most Gracious and Merciful******
//Oct/05/2022 09:28UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    string s;
    ll a=0,b=0,c=0,mini=0,maxi=0;
    cin>> s;
    for(ll i=0; i<s.length(); i++){
        if(s[i]=='A') a++;
        else if(s[i]=='B') b++;
        else c++;
    }
    mini=min(a,c);
    maxi=max(a,c);
    b-=mini;
    if(b==maxi) cout<< "YES" <<nn;
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