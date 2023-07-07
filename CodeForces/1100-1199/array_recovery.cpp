//**********In the name of Allah, most Gracious and Merciful******
//Oct/10/2022 01:35UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    ll n=0,p=0,q=0;     cin>> n;
    vector<ll>d(n,0);
    for(auto &x:d)      cin>> x;

    vector<ll>ele;
    ele.push_back(d[0]);

    for(ll i=1; i<n ;i++){
        if(d[i]==0){
            ele.push_back(abs(ele[i-1]));
            continue;
        }
        p=ele[i-1]+d[i];
        q=ele[i-1]-d[i];
        if(q<0) ele.push_back(p);
        else{
            cout<< -1 <<nn;
            return;
        }
    }

    for(auto e:ele)
        cout<<e<<" ";
    cout<<nn;
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}