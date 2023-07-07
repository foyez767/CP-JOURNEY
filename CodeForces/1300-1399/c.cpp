//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll n=0,sum=0,cnt=0,init=0,x=0,k=0,cnt1=0,mx=0,mini=0;         cin>> n;
    vector<ll>vec(n,0);
    for(auto &x:vec)    cin>>x;
    vector<ll>v;
    ll ans=n;
    for(ll i=0;i<n; i++){
        init+=vec[i];
        cnt=0;
        for(ll j=i+1; j<n;j++){
            sum+=vec[j];
            cnt++;
            if(sum==init){
                mx=max(mx,cnt);
                cnt=0;sum=0;
                continue;
            }else if(sum>init or j==n-1){
                mx=10000;
                sum=0;
                cnt=0;
                break;
            }
        }
        ans=min(ans,mx);
    }
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
// cin>>t;
while(t--)   solve();
    
    return 0;
}