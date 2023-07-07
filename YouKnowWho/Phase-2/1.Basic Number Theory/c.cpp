//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    set<ll> se;
    // ll x=0;

    se.insert(1);
    for(ll i=1; i<1500; i++){
        auto it= se.begin();
        ll x= *(se.begin());

        se.erase(it);

        se.insert(x * 2);
        se.insert(x * 3);
        se.insert(x * 5);
    }

    cout<<"The 1500'th ugly number is "<<*(se.begin())<<"."<<nn;
 
 }
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    // cin>>t;
    while(t--)   solve();
    
    return 0;
}