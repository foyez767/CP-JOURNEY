//Sep/05/2022 12:12UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll arr[4]{},sum=0,i=0;
    for(int j=0;j<4;j++)
        cin>>arr[j];
    while(1){
        if(arr[i]!=0 &&  arr[i+2]!=0 && arr[i+3]!=0){
            sum+=256;
            arr[i]--;
            arr[i+2]--;
            arr[i+3]--;
        }else if(arr[i]!=0 && arr[i+1]!=0){
            sum+=32;
            arr[i]--;
            arr[i+1]--;
        }else break;
    }
    cout<<sum<<nn;
    
    
    return 0;
}