//Aug/07/2022 07:15UTC-6 : 155A
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    ll n=0,min=0,max=0,cnt=0;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    min=arr[0],max=arr[0];
    //max and min count seperately
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            cnt++;
            max=arr[i];
        }
        if(arr[i]<min){
            cnt++;
            min=arr[i];
        }
    }
    cout<<cnt<<"\n";

    return 0;
}