//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;


ll multiplication(ll a, ll b,ll m){
    ll res = 0; 
    a %= m;
    while (b) {
        if (b % 2)
            res = (res + a) % m;

        a = (2 * a) % m;
        b >>= 1; 
    }
    return res;
}

ll pow_mod(ll x,ll n,ll m){
    x %= m;
    ll res = 1LL;
    while (n > 0) {
        if (n & 1) res = multiplication(res , x, m);
        x = multiplication(x, x, m);
        n >>= 1;
    }
    return res;
}

ll inverse(ll a, ll p) {
  return pow_mod(a, p - 2, p);
}
 
void solve(){
    ll a=0,b=0,p=0;     cin>> a>> b>> p;

    cout<< pow_mod(a,b,p) <<nn;
    cout<< multiplication(a,b,p) <<nn;
    cout<< multiplication(a ,inverse(b,p),p) <<nn;

 }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    // cin>>t;
    while(t--)   solve();
    
    return 0;
}