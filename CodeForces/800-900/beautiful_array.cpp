//Sep/10/2022 22:02UTC-6
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
    ll n=0,k=0,b=0,s=0,in=0,flag=0,mini=0;
    cin>>n>>k>>b>>s;
    vector<ll>vec;
    if(k*b<=s){
        mini=min(s,k*b+k-1);
        if(s-mini>((k-1)*(n-1))){
            flag=1;
        }else{
            cout<<mini<<" ";
            s-=mini;
            n--;
            while(n){
                mini=min(s,k-1);
                s-=mini;
                cout<<mini<<" ";
                n--;
            }
            cout<<nn;
        }
    }else flag=1;

    if(flag==1) cout<<-1<<nn;
  
vec.clear();
}
   return 0;
}