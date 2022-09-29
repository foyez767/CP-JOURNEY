//Sep/05/2022 10:18UTC-6
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
        ll m=0,x=0,arr[10],max=0;
        cin>>m;
        for(int i=0;i<=9;i++){
            x=pow(10,i);
            arr[i]=m-x;
            if(arr[i]>=0) max=arr[i];       
        }
        cout<<max<<nn;
    }
    
    return 0;
}