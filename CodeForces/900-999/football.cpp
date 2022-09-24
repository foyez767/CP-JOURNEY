//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
  
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll n=0;
cin>>n;
string s;
map<string,ll>mp;
for(ll i=0;i<n;i++){
    cin>>s;
    mp[s]++;
}

ll max=0;
for(auto m:mp){
    if(m.second>max){
        max=m.second;
        s=m.first;
    }
}
cout<<s<<nn;
    
    return 0;
}