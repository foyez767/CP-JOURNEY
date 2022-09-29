//Aug/18/2022 23:05UTC-6 : 34A
#include<bits/stdc++.h>
#define ll long long
#define nn  "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    int n=0;
    cin>>n;
    array<int,102>arr{};
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    arr[n+1]=arr[1];
    int min=0,dif=0;
    array<int,102>diff;
    for(int i=1;i<=(1+n);i++){
        diff[i]=abs(arr[i]-arr[i+1]);
    }
    ll i1=1,i2=2;
    min=diff[1];
    for(int i=2;i<=n;i++){
        if(diff[i]<min){
            min=diff[i];
            i1=i;
            i2=i+1;
        }
    }
    if(i2>n){
        cout<<i1<<" "<<1<<nn;
    }else {
        cout<<i1<<" "<<i2<<nn;
    }  
    return 0;
}