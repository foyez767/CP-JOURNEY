//**********In the name of Allah, most Gracious and Merciful******
//Oct/01/2022 17:56UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    string s;
    char ch;
    cin>>s >>ch;
    ll x=s.length(),flag=0;
    vector<pair<ll,ll>> vec;
    for(ll i=0;i<s.length(); i++){
        if(s[i]==ch){
            vec.push_back(make_pair(i,x-i-1));
        }
    }
    for(auto v: vec){
        if(v.first %2==0 && v.second%2==0){
            flag=1;
            break;
        }
    }
    (flag==1) ? cout<<"YES"<<nn : cout<<"NO"<<nn;
    vec.clear();
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}