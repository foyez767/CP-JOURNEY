//Sep/11/2022 21:57UTC-6
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
    ll n=0,hero=0,sum=0,start=0,flag=0;
    cin>>n;
    ll arr[n+1]{};
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(arr[i]==0 && i!=n) hero++;
        if(i!=n){
            sum+=arr[i];
        }
        if(arr[i]!=0 && flag==0){
            start=i;
            flag=1;
        }
    }
    if(hero==(n-1)){
        cout<<0<<nn;
    }else{
        cout<<hero+sum-start+1<<nn;
    }
}   
    return 0;
}