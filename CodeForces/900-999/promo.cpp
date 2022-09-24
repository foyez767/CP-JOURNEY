//Sep/13/2022 23:48UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
  
int main(){
ios::sync_with_stdio(0);
cin.tie(0);

ll n=0,q=0,x=0;
cin>>n>>q;
vector<ll>vec;
for(ll i=1;i<=n;i++){
    cin>>x;
    vec.push_back(x);
}
sort(vec.rbegin(),vec.rend());
ll prefix [n+1]{};
for(ll i=1;i<=n;i++){
    prefix[i]=prefix[i-1]+vec[i-1];
}
while(q--){
    ll x=0,y=0;
    cin>>x>>y;
    cout<<prefix[x]-prefix[x-y]<<nn;
}   
    return 0;
}