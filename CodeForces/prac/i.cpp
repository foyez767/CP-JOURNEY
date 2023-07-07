//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    ll n=0,x=0,maxi=0,k=0,p=0;     cin>> n>>k;
    vector<ll>vec,prefix(n,0);
    for(ll i=0;i<n;i++){
        cin>>x;
        vec.push_back(x);
    }
    prefix[0]=vec[0];
    for(ll i=1;i<n;i++){
        prefix[i]=prefix[i-1]+vec[i];
    }
    vector<ll>q;
    for(ll i=0;i<n;i++){
        cin>> x;
        q.push_back(x);
    }
    while(x--){
    for(ll i=0;i<k; i++){
        if(vec[i]<=q[i])
            p++;
        else break;
    }
    cout<< prefix[p] <<" ";
}
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}