//In the name of Allah, most Gracious and Merciful
//Sep/19/2022 10:57UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll n=0,x=0,cnt=1;
cin>>n;
ll arr[n+1]{},prefix[n+1]{};  
for(ll i=1;i<=n;i++) cin>>arr[i];
sort(arr,arr+n+1);
for(ll i=1;i<=n;i++){
    prefix[i]=prefix[i-1]+arr[i];
}
for(ll i=n;i>0;i--){
    if(prefix[n]-prefix[i-1]>prefix[i-1]){
        cout<<cnt<<nn;
        break;
    }
    else{
        cnt++;
    }
}
    
    return 0;
}