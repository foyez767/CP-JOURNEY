//Aug/23/2022 10:42UTC-6 :36B
#include<bits/stdc++.h>
#define outer0(b) for(int i=0;i<b;i++)
#define outer1(b) for(int i=1;i<=b;i++)
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    ll n=0,m=0,sum=0;
    cin>>n>>m;
    int arr[n] {};
    outer0(n) cin>>arr[i];
    sort(arr,arr+n);
    ll k=0;
    for(int i=0;i<n;i++){
        if(k>=m)
            break;
        if(arr[i]<0){
            sum+=arr[i];
            k++;
        }      
    }      
     cout<<-sum<<nn ;
    return 0;
}