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
    ll n=0,k=0,b=0,s=0,in=0;
    cin>>n>>k>>b>>s;
    in=n;
    vector<ll>vec;
    if(k*b>s || s>b*k+(k-1)*n) cout<<-1<<nn;   
    else{
        cout<<k*b<<" ";
        s-=(k*b);
        n--;
        while(n){
            if(s>=k){
                cout<<k-1<<" ";
                s-=(k-1);
            }
            else{
                cout<<s<<" ";
                s-=s;
            }                
            n--;
        }
            cout<<nn;
    }
}
 
   return 0;
}