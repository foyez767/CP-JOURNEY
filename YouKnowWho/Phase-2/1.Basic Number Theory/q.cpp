//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    ll l=0,p=0,n=0,batti=0;     cin>> p>> l;
    n=p-l;

    vector<ll> divs;
    for(ll i=1; i*i<=n; i++){
        if(n % i==0){
            divs.push_back(i);
            if(i != (n/i))
                divs.push_back(n/i);
        }
    }

    sort(divs.begin(),divs.end());

    for(ll i=0; i<divs.size(); i++){
        if(divs[i]<=l) continue;
        else{
            cout<< divs[i] <<" ";
            batti=1;
        }
    }

    if(!batti) cout<<"impossible";
    cout<< nn;
 }
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    // while(t--)   solve();
    for(ll i=1; i<=t; i++){
        cout<< "Case "<<i<<": ";
        solve();
    }
    return 0;
}