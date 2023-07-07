//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll n=0,x=0,flag=0;     cin>> n;
    ll arr[60] {};
    for(ll i=0; i<n; i++)   cin>> arr[i];

    string  s;      cin>> s;
    vector<char> St(60,'A');

    for(ll i=0; i<s.length(); i++){
        x=arr[i];
        if(St[x]=='A'){
            St[x]=s[i];
            continue;
        }
        if(St[x] != s[i]){
            flag=1;
            break;
        }
    }
    (flag==1) ? cout<< "NO" <<nn : cout<< "YES"<<nn;
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}