//**********In the name of Allah, most Gracious and Merciful******
//Oct/12/2022 07:52UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    ll n=0,k=1,cost=0;          cin>> n;
    string s;                   cin>> s;
    vector<ll>vec(n+1,0);
    for(ll i=0; i<s.length(); i++){
        if(s[i]=='1'){
            vec[i+1]=100;
        }
    }

    for(ll k=1; k<vec.size(); k++){
        for(ll j=k; j<vec.size(); j+=k){
            if(vec[j]==0){
                vec[j]=1;
                cost+=k;
            }else if(vec[j]==100) break;
        }
    }
    cout << cost <<nn;
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}