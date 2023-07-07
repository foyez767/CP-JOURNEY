#include<iostream>
#include<algorithm>
#include<map>
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll n=0,x=0;
    cin>>n;
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x]++;
    }
    ll cnt=0,diff=0;
    for(auto v:mp){
        if(v.first != v.second){
            diff=v.second-v.first;
            if(diff>0) cnt+=diff;
            else cnt+=(v.second);
        }
    }
    cout<<cnt<<nn;

    return 0;
}