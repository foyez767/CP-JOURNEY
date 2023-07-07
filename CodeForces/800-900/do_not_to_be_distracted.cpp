//**********In the name of Allah, most Gracious and Merciful******
//Sep/29/2022 23:17UTC-
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    string s;
    ll n=0,flag=0;
    cin>>n>>s;
    ll arr[27] {};
    for(ll i=0; i<s.length();  i++){
        if(s[i]==s[i+1]) continue;
        char ch=s[i];
        if(arr[ch-'A'+1]==1){
            flag=1;
            break;
        }else arr[ch-'A'+1]=1;
    }
    (flag==1) ? cout<<"NO"<<nn : cout<<"YES"<<nn;
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}