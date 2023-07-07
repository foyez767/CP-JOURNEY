#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    ll t=0,a=0,b=0;
    cin>>t;
    while(t--){
        set<ll>first;
        set<ll>second;
        cin>>a>>b;
        ll min=(a>b)?b:a;
        ll cnt=0;
        for(int i=1;i*i<=a;i++){
            if(a%i==0){
                cnt++;
                if(i!=(a/i))
                    cnt++;
            }
        }

    }
    return 0;
}