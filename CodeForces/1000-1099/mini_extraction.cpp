//**********In the name of Allah, most Gracious and Merciful******
//Oct/04/2022 21:39UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    ll n=0,q=0,x=0;
    cin>>n;
    vector<ll>ele;
    for(ll i=0; i<n; i++){
        cin>>q;
        ele.push_back(q);
    }
    sort(ele.begin(),ele.end());

    vector<ll>min,prefix;
    min.push_back(ele[0]);
    prefix.push_back(ele[0]);
    for(ll i=1 ;i<ele.size(); i++){
        q=ele[i]-prefix[i-1];
        min.push_back(q);
        x=prefix[i-1]+q;
        prefix.push_back(x);
    }
    cout << *(max_element(min.begin(),min.end())) <<nn;
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}