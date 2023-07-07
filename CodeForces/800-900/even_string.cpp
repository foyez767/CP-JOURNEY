//**********In the name of Allah, most Gracious and Merciful******
//Oct/20/2022 11:13UTC-6 
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    string s;       cin>> s;
    ll len=s.length()/2,flag=0;

    vector<char>st,str;
    for(ll i=0;i<len;i++)
        st.push_back(s[i]);
    for(ll i=len;i<s.length(); i++)
        str.push_back(s[i]);
    
    if(st.size()==str.size()){
        for(ll i=0; (i<st.size() and i<str.size()); i++){
            if(st[i] != str[i]){
                flag=1;
                break;
            }
        }
    }else flag=1;

    (flag==0) ? cout<< "YES" <<nn :  cout<< "NO" <<nn;
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}