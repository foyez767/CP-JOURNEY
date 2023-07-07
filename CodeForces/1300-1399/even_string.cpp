//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    ll cnt=0;
    string s;       cin>> s;
    for(ll i=0; i<s.length()-1; i++){
        if(s[i]==s[i+1]) i++;
        else{
            char c1=s[i];
            char c2=s[i+1];
            for(ll j=i+2; j<s.length();j++){
                if(s[j]==c1){
                    cnt++;
                    i=j;
                    break;
                }else if(s[j]==c2){
                    i=j;
                    break;
                }else cnt++;
            }
        }
    }
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
// cin>>t;
while(t--)   solve();
    
    return 0;
}