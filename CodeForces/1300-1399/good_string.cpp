//**********In the name of Allah, most Gracious and Merciful******
//Oct/11/2022 12:32UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll n=0;         cin>> n;
    string s;       cin>> s;
    ll cnt=0;
    for(ll i=0; i<s.length();i+=2){
        if(s[i]==s[i+1]){
            s.erase(i+1,1);
            cnt++;
            i-=2;
            continue;
        }
    }
    ll x=s.length();
    if(x%2){
        cnt++;
        s.erase(x-1,1);
        cout<< cnt <<nn;
        cout<< s <<nn;
    }else{
        cout<< cnt <<nn;
        cout<< s <<nn;
    }
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
// cin>>t;
while(t--)   solve();
    
    return 0;
}