#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    ll n=0,k=0,pos_even=0;
    cin>>n>>k;
    if(n%2==0)
         pos_even=(n/2);
    else
        pos_even=((n+1)/2);
    
    if(k<=pos_even)
        cout<<k*2-1<<"\n";
    else if(k>pos_even)
        cout<<(k-pos_even)*2<<"\n";
    

    return 0;
}