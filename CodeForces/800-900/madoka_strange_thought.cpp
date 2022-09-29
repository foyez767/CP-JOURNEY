//Sep/08/2022 07:11UTC-6
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
    ll n=0,cnt=0;
    cin>>n;
    cnt=(n+2*floor(n/2)+2*floor(n/3));
    cout<<cnt<<nn;    
}
    
    return 0;
}