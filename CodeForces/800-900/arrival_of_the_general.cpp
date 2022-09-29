//Aug/12/2022 23:12UTC-6 : 144A
#include<bits/stdc++.h>
#define ll long long
#define end "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    ll n=0,max=0,min=110,max_pos=0,min_pos=0,t=0;
    cin>>n;
    ll arr[n+1] {};
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
            max_pos=i;
        }
        if(arr[i]<=min){
            min=arr[i];
            min_pos=i;
        }
    }
    (min_pos>max_pos)? cout<<(n-min_pos)+(max_pos-1)<<end : cout<<(max_pos-1)+(n-min_pos-1)<<end;

    return 0;
}