//Aug/05/2022 07:37UTC-6 :1475A
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll t=0;
    cin>>t;
    while(t--){
        ll n=0;
        cin>>n;
    if(n%2 != 0)
        cout<<"YES\n";
    else{
        while(n%2==0){
            n/=2;
        }

        if(n==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    }
    return 0;
}