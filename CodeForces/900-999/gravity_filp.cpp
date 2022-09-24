//In the name of Allah, most Gracious and Merciful
//Sep/19/2022 11:09UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

  
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll x=0,n=0;
cin>>n;
ll arr[n]{};
for(ll i=0;i<n;i++) cin>>arr[i];
sort(arr,arr+n);
for(ll i=0;i<n;i++)
    cout<<arr[i]<<" ";
cout<<nn;
  
    return 0;
}