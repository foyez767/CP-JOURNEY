//Sep/06/2022 08:09UTC-6
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
        ll a=0,b=0,c=0,d=0,p=0,q=0;
        cin>>a>>b>>c>>d;
        if(a==0 && c==0){
            cout<<0<<nn;
        }
        else if(a==0||c==0)
            cout<<1<<nn;
        else{
            ll maxi=max(a*d,b*c);
            ll mini=min(a*d,b*c);
            if(maxi==mini) cout<<0<<nn;
            else if(maxi%mini==0) cout<<1<<nn;
            else cout<<2<<nn;
        }
    }
    
    return 0;
}