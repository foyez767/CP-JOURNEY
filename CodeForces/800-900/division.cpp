//Sep/07/2022 07:15UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    ll t=0;
    cin>>t;
    while (t--){
        ll n=0;
        cin>>n;
        if(n>=1900) cout<<"Division 1"<<nn;
        else if(n<=1899 && n>=1600) cout<<"Division 2"<<nn;
        else if(n>=1400 && n<=1599) cout<<"Division 3"<<nn;
        else cout<<"Division 4"<<nn;
    }
    return 0;
}