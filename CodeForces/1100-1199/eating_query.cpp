//**********In the name of Allah, most Gracious and Merciful******
//Oct/02/2022 22:08UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll n=0,q=0,x=0,max=0;
    cin>> n>>q;
    vector<ll>vec;
    vector<ll>prefix (n,0);
    for(ll i=0;i<n;i++){
        cin>>x;
        vec.push_back(x);
    }
    sort(vec.rbegin(),vec.rend());
    prefix[0]=vec[0];
    for(ll i=1; i<vec.size();i++){
        prefix[i]=prefix[i-1]+vec[i];
    }
    max=prefix[n-1];

    while(q--){
        cin>>x;
        if(x>max) cout<< -1 <<nn;
        else{
            auto it=lower_bound(prefix.begin(),prefix.end(),x);
            cout<<it-prefix.begin()+1<<nn;
        }
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