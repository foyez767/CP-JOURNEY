//Sep/11/2022 20:39UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll n=0,t=0;
    cin>>n>>t;
    ll arr[n+1]{},prefix_rmove[n+1]{},prefix_lmove[n+1]{},dam=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(i>1){
            if(arr[i]<arr[i-1]){
                dam=abs(arr[i-1]-arr[i]);
                prefix_rmove[i]=dam+prefix_rmove[i-1];
            }else{
                prefix_rmove[i]=prefix_rmove[i-1];
            }
        }
    }
    for(int i=n-1;i>=1;i--){
        if(arr[i]<arr[i+1]){
            dam=abs(arr[i]-arr[i+1]);
            prefix_lmove[i]=prefix_lmove[i+1]+dam;
        }else{
            prefix_lmove[i]=prefix_lmove[i+1];
        }
    }
    while(t--){
        ll x=0,y=0,damage=0;
        cin>>x>>y;
        (x<=y)? cout<<abs(prefix_rmove[y]-prefix_rmove[x])<<nn : cout<<abs(prefix_lmove[x]-prefix_lmove[y])<<nn;
    }
    
    return 0;
}