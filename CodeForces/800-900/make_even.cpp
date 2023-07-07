//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll n=0,flag=0,dig=0;     cin>> n;
    vector<ll>vec;
    while(n){
        dig=n%10;
        if(dig%2==0) flag=1;
        vec.push_back(dig);
        n/=10;
    }
    if(flag==0)
    {
        cout<< -1 <<nn;
        return;
    }
    reverse(vec.begin(),vec.end());
    ll len=vec.size();
    if(vec[len-1]%2==0) cout<< 0 <<nn;
    else if(vec[0]%2==0) cout<< 1 <<nn;
    else cout<< 2 <<nn;
 }

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}