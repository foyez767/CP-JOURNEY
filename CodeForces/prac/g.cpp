//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    vector<string>ve;
    string s;
    for(ll i=0;i<8;i++){
        cin>> s;
        ve.push_back(s);
    }
    ll r_c=0,b_c=0,k=0,p=8;
    //red count
    for(ll i=0; i<8;i++){
        s=ve[i];
        for(ll j=0;j<8;j++){
            if(s[j]=='R')
                r_c++;
            else break;

        }
        if(r_c!=8) r_c=0;
        else break;
    }
   
    
    if(r_c==8) cout<<"R"<<nn;
    else cout<<"B"<<nn;
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}