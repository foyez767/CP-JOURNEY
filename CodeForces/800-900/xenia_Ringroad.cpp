//Aug/20/2022 08:19UTC-6 :339B
#include<bits/stdc++.h>
#define ll long long
#define nn "\n" 
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    ll n=0,m=0,time=0;
    cin>>n>>m;
    ll arr[m+1] {};
    arr[0]=1;//start point
    for(int i=1;i<=m;i++){
        cin>>arr[i];
        if(arr[i]>arr[i-1])
            time+=(arr[i]-arr[i-1]);
        else if(arr[i]<arr[i-1]){
            time+=(n+arr[i]-arr[i-1]);
        }
    }
    cout<<time<<nn;
    return 0;
}