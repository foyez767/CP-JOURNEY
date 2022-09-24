//Sep/18/2022 19:21UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

  
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll n=0,x=0;
cin>>n;
ll arr[5]{};
for(ll i=1;i<=n;i++){
    cin>>x;
    arr[x]++;
}   
ll taxi=arr[4];
arr[4]=0;
//
if(arr[1]>=arr[3]){
    taxi+=arr[3];
    arr[1]=arr[1]-arr[3];
    arr[3]=0;
}else{
    taxi+=arr[1];
    arr[3]-=arr[1];
    arr[1]=0;
}
//
if(arr[2]%2==0){
    taxi+=(arr[2]/2);
    arr[2]=0;
}else{
    taxi+=(arr[2]/2);
    arr[2]=1;
    taxi+=1;
    arr[1]-=2;
    arr[2]=0;
}
if(arr[1]>0){
    if(arr[1]%4==0) taxi+=arr[1]/4;
    else taxi+=(arr[1]/4+1);
    arr[1]=0;
}
for(ll i=2;i<4;i++){
    if(arr[i]>0 && i==3){
        taxi+=arr[i];
        arr[i]=0;
    }
}
cout<<taxi<<nn;
    
    return 0;
}