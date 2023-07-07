//**********In the name of Allah, most Gracious and Merciful******
//Oct/05/2022 22:03UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll n=0,x=0,op=0;
    cin>> n;
    vector<ll>vec;
    for(ll i=0; i<n; i++){
        cin>> x;
        if(find(vec.begin(),vec.end(),x)==vec.end()){
            vec.push_back(x);
        }
    }
    sort(vec.rbegin(),vec.rend());
    for(ll i=0; i<(vec.size()-1); i++)
        op+=(vec[i]-vec[i+1]);
    
    cout<< op <<nn;
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}