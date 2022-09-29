//Sep/05/2022 23:54UTC-6	
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
        ll n=0,h1=0,h2=0,h3=0;
        cin>>n;
        (n%3==0)? h1=floor(n/3)+1 : h1=floor(n/3)+2;
        h2=floor((n-h1)/2)+1;
        h3=n-h1-h2;
        cout<<h2<<" "<<h1<<" "<<h3<<nn;
    }
    
    return 0;
}