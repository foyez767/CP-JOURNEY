//**********In the name of Allah, most Gracious and Merciful******
//Nov/05/2022 08:49UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
   ll len=0,flag=0,diff=0;     cin>> len;
   string s;            cin>> s;
    string st;
    vector<char> vec;

    if(s[0]!='9'){
        vector<char> vec1(len,'9');
        vec.swap(vec1);
    }              
    else{
        flag=1;
        vector<char> vec1(len,'1');
        vec.swap(vec1);       
    }

    if(flag==0){
        for(ll i=0; i<len; i++){
           diff= (ll)(vec[i]-s[i]);
           cout<<diff;
        }
        cout<<nn;
    }else{
      reverse(s.begin(),s.end());
      diff=0;
      ll carry=0;
      vector<ll> ans;
    for(ll i=0; i<len; i++)
    {
        diff= (ll)((vec[i]-'0')-(s[i]-'0')-carry);
        if(diff<0){
            carry=1;
            diff+=10;
        }else carry=0;
        ans.push_back(diff);
    }
    reverse(ans.begin(),ans.end());
    for(auto a: ans) cout<<a;
    cout<<nn; 
    }

 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}