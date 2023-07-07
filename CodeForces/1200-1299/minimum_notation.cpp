//**********In the name of Allah, most Gracious and Merciful******
//Oct/12/2022 09:54UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    string s,str;       cin>> s;
    ll mini=0,x=0;
    str=s;
    vector<ll> vec;
    sort(str.begin(),str.end());
    mini=(ll)(str[str.length()-1]-'0');

    for(ll i=0; i<s.length(); i++){
        x=(ll)(s[i]-'0');
        vec.push_back(x);
    }

    vector<ll> ans;
    for(ll i=vec.size()-1; i>=0; i--){
        if(vec[i]<=mini){
            mini=min(vec[i],mini);
            ans.push_back(vec[i]);
        }else{
            x=vec[i]+1;
            if(x>9) x=9;
            ans.push_back(x);
        }
    }
    sort(ans.begin(),ans.end());

    for(auto v: ans)
        cout<<v;
    cout<<nn;
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}