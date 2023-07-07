//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll n=0,k=0,cnt=0;     cin>> n>> k;
    vector<ll> divs;
    for(ll i=1; i*i<=n; i++){
        if(n%i==0){
            cnt++;
            divs.push_back(i);
            if(i!=(n/i)){
                cnt++;
                divs.push_back(n/i);
            }
        }
    }

    sort(divs.begin(),divs.end());

    // for(auto d: divs) cout<<d<<" ";

    if(cnt>=k)    cout<< divs[k-1] <<nn;
    else cout<< -1 <<nn;
 
 }
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    // cin>>t;
    while(t--)   solve();
    
    return 0;
}