//**********In the name of Allah, most Gracious and Merciful******
//Sep/27/2022 07:25UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

  
void solve(){
    string s;
    getline(cin,s);
    ll n=0,q=0,x=0,a=0,b=0,pp=0,qq=0;
    cin>> n>> q;
    map<ll,vector<ll>>mp;
    for(ll i=1;i<=n;i++){
        cin>>x;
        mp[x].push_back(i);
    }
    while(q--){
        ll flag=0;
        cin>> a >> b;
        if(mp[a].empty() or mp[b].empty()){
            flag=1;
        }else{
            pp=mp[a].front();
            qq=mp[b].back();
            if(pp<=qq) flag=0;
            else flag=1;
        }
        (flag==1) ? cout<<"NO"<<nn : cout<<"YES"<<nn;
    }
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