//**********In the name of Allah, most Gracious and Merciful******
//Oct/24/2022 06:58UTC-6
#include<bits/stdc++.h>
#define ll long long
#define yes "YES"
#define no "NO"
#define nn "\n"
using namespace std;
 
void solve(){
    ll n=0,m=0,flag=0,x=0;      cin>> n>> m;
    if(n>m) {
        cout << no <<nn;
        return;
    }
    if(n%2==0) x=n-2;
    else       x=n-1;

    vector<ll> vec(x,1);
    m=m-x*1;
    x=n-x;
    if(x==1) vec.push_back(m);
    else if(x==2 and m%2==0){
        m/=2;
        vec.push_back(m);
        vec.push_back(m);
    }else{
        cout<< no <<nn;
        return;
    }
    cout<< yes <<nn;
    for(auto v: vec)    cout<< v <<" ";
    cout<< nn;

 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}