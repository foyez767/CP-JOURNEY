//**********In the name of Allah, most Gracious and Merciful******
//Sep/21/2022 04:19UTC-6	
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
    ll n=0,m=0,cnt=0,last=0;
    cin>>n>>m;
    vector<ll>vec;
    for(ll i=1;i<=n;i++){
        ll x=0;
        cin>>x;
        vec.push_back(x);
    }

    if(m<n){
        cout<<"NO"<<nn;
        continue;
    } 
    sort(vec.rbegin(),vec.rend());

    last=m-vec[0];
    ll i=0,k=0;
    while(i<last){
        cnt++;
        i+=vec[k];
        i++;k++;
        if(cnt==n) break;
    }
    if(cnt==n) cout<<"YES"<<nn;
    else cout<<"NO"<<nn;

}
    return 0;
}