//**********In the name of Allah, most Gracious and Merciful******
//Sep/30/2022 18:56UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    ll n=0,x=0;
    cin>>n;
    vector<ll>vec;
    if(n==1){
        cin>>x;
        if(x==1) cout<<"YES"<<nn;
        else cout<<"NO"<<nn;
    }else{
         for(ll i=0;i<n;i++){
            cin>>x;
            vec.push_back(x);
        }
        sort(vec.rbegin(),vec.rend());
        if(vec[0]-vec[1]>=2) {
            cout<<"NO"<<nn;
        }else{
            cout<<"YES"<<nn;
        }
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