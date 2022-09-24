//Sep/14/2022 04:04UTC-
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=0;
cin>>t;
while(t--){
    string s;
    cin>>s;
    char ch;
    ll min_cost=abs((s[0]-'a')-(s[s.length()-1]-'a')),len=s.length(),max_jumps=0,flag=0;
    map<char,vector<ll>>mp;
    vector<ll>pos;
    for(int i=0;i<s.length();i++){
        ch=s[i];
        mp[ch].push_back(i+1);
    }
    if(s[0]>s[len-1]){
        flag=1;
          for(auto v:mp){
            if(v.first<=s[0] && v.first>=s[len-1]){
                ll siz=mp[v.first].size();
                for(ll k=siz-1;k>=0;k--){
                    max_jumps++;
                    pos.push_back(v.second[k]);
                }
            }
}
    }else if(s[0]<=s[len-1]){
        for(auto v:mp){
            if(v.first>=s[0] && v.first<=s[len-1]){
                    for(auto ve:v.second){
                        max_jumps++;
                        pos.push_back(ve);
                    }
                }
            }
    }

    if(flag==1){
        ll sz=pos.size();
         cout<<min_cost<<" "<<max_jumps<<nn;
        for(ll i=sz-1;i>=0;i--)
            cout<<pos[i]<<" ";
        cout<<nn;
    }else{
        cout<<min_cost<<" "<<max_jumps<<nn;
        for(auto v:pos)
            cout<<v<<" ";
        cout<<nn;
    }
  
}
    
    return 0;
}