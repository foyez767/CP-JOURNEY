//**********In the name of Allah, most Gracious and Merciful******
//	Sep/28/2022 23:41UTC
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
  
void solve(){
    vector<string> vec;
    map<string,ll>mp;
    map<char,ll>first_occ;
    map<char,ll>second_occ;
    ll n=0;
    cin>>n;
    string s;
    for(ll i=0;i<n;i++){
        cin>>s;
        vec.push_back(s);
        s=vec[i];
        mp[s]++;
        first_occ[s[0]]++;
        second_occ[s[1]]++;
    }
    ll cnt=0;
    for(ll i=0; i<vec.size(); i++){
        s = vec[i];
        cnt+=max((ll)0,first_occ[s[0]]-mp[s]);
        cnt+=max((ll)0,second_occ[s[1]]-mp[s]);
        if(first_occ[s[0]]>0) first_occ[s[0]]--;
        if(second_occ[s[1]]>0) second_occ[s[1]]--;
        mp[s]--;
    }
cout<< cnt <<nn;
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