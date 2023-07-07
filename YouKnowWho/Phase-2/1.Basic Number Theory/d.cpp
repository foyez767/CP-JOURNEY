//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll n=0,x=0,gc=0,cnt=1;     cin>> n;
    for(ll i=1; i<=n; i++){
        cin>> x;
        gc=__gcd(gc,x);
    }

    for(ll i=2; i*i<=gc; i++){
        if(gc % i==0){
            x=0;
            while(gc % i==0){
                x++;
                gc/=i;
            }
            cnt*=(x+1);
        }
    }
    if(gc>1) cnt*=2;

    cout<< cnt <<nn;
 }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    // cin>>t;
    while(t--)   solve();
    
    return 0;
}