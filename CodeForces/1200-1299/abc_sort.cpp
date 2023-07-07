//**********In the name of Allah, most Gracious and Merciful******
//Oct/02/2022 18:55UTC-
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll n=0,x=0,flag=0;
    cin>>n;
    vector<ll>vec;
    for(ll i=0;i<n;i++){
        cin>>x;
        vec.push_back(x);
    }
    if(n%2==0){
        for(ll i=0;i<(n-1);i+=2){
            if(vec[i]>vec[i+1]){
                swap(vec[i],vec[i+1]);
            }
        }
    }else{
        for(ll i=n-1;i>0;i-=2){
            if(vec[i-1]>vec[i]){
                swap(vec[i-1],vec[i]);
            }
        }
    }

    flag=is_sorted(vec.begin(),vec.end());
    (flag==0) ? cout<<"NO"<<nn : cout<<"YES"<<nn;
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}