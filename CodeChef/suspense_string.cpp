//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    ll n=0;         cin>>n;
    string s;       cin>>s;
    list<char>li;
    ll i=0,j=n-1;
    while(j-i>=0){
        (s[i]=='0') ? li.push_front(s[i]) : li.push_back(s[i]);
        if(i==j) break;
        (s[j]=='0') ? li.push_back(s[j]) : li.push_front(s[j]);
        i++;   j--;
    }
    for(auto l: li)
        cout<<l;
    cout<<nn;
    li.clear();
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}