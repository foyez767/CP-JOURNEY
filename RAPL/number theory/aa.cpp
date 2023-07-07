#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll t=0;
    cin>>t;
    while(t--){
        ll n=0,sum=1;
        cin>>n;
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        for(ll i=2;i*i<=n;i++){
            if(n%i==0){
             sum+=i;
                if(i != (n/i) && (n/i)!=n)
                    sum+=(n/i);
        }
    }
    cout<<sum<<endl;
    }
    return 0;
}