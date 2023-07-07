//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    ll y=0,n=0;
    string s;       cin>>n >>s;
    for(ll i=0; i<s.length(); i++){
        if(s[i]=='0'){
            y=i;
            break;
        }
    }
    (y != 0)? cout << y <<nn : cout<< n <<nn;
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}