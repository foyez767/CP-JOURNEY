//**********In the name of Allah, most Gracious and Merciful******
//Sep/26/2022 04:10UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll n=0,max=0;
    cin>>n;
    string s;
    cin>>s;
    vector<ll> be_turn;
    vector<ll> af_turn;
    for(ll i=0; i<s.length(); i++){
        if(s[i]=='L'){
           max+=(i);
           be_turn.push_back(i);
           af_turn.push_back(n-1-i);
        }else{
            max+=(n-1-i);
            be_turn.push_back(n-1-i);
            af_turn.push_back(i);
        }
    }
    for(ll i=0; i<af_turn.size(); i++){
        af_turn[i]=af_turn[i]-be_turn[i];
    }
    sort(af_turn.rbegin(),af_turn.rend());

    for(ll i=0; i<af_turn.size() ;i++){
        if(af_turn[i]>0){
            max+=af_turn[i];
            cout<<max<<" ";
        }else cout<<max<<" ";           
    }
    cout<<nn;
    
 
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