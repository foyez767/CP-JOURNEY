//Sep/19/2022 07:57UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

  
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=0;
cin>>t;
while(t--){
    ll n=0,change=0,l=0,r=0,x=0;
    cin>>n>>x;
    ll vec[n]{};
    for(ll i=0;i<n;i++){
        cin>>vec[i];
    }
    l=vec[0]-x;
    r=vec[0]+x;
    for(ll i=1;i<n;i++){
        l=max(l,abs(vec[i]-x));
        r=min(r,abs(vec[i]+x));
        if(l>r){
            change++;
            l=abs(vec[i]-x);
            r=abs(vec[i]+x);
        }
    }
    cout<<change<<nn;
}
    return 0;
}