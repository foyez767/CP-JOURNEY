//**********In the name of Allah, most Gracious and Merciful******
//Oct/20/2022 09:06UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
#define yes "YES"
#define no "NO"
using namespace std;

void solve(){
    ll n=0,x=0,flag=0,y=0,cmn_diff=(1<<30);     cin>> n;
    vector<ll> a(n,0),b(n,0);
    for(auto &x: a)     cin>> x;

    for(ll i=0;i<n;i++){
        cin>> b[i];
        if(b[i]!=0 ){
            cmn_diff=min(cmn_diff,a[i]-b[i]);
        }
    }
    if(cmn_diff<0 or (n==1 and a[0]<b[0])){
        cout<< no <<nn;
        return;
    }else if(cmn_diff==(1<<30)){
        cout<< yes <<nn;
        return;
    }

    flag=0;
    for(ll i=0; i<n; i++)
    {
        ll diff=a[i]-b[i];
        if((diff>cmn_diff) or (b[i]!=0 and diff < cmn_diff)){
            flag=1;
            break;
        }
    }
    (flag==0) ? cout<< yes <<nn : cout<< no <<nn;
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}