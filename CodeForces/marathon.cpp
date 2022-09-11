//Sep/05/2022 10:01UTC-6
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
        ll arr[4] {},cnt=0;
        for(int i=0;i<4;i++){
            cin>>arr[i];
        }
        for(int i=1;i<4;i++){
            arr[i]=arr[0]-arr[i];
            if(arr[i]<0) cnt++;
        }
        cout<<cnt<<nn;
    }
    
    return 0;
}