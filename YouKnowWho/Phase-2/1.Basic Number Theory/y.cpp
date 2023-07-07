//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    ll a=0,b=0,gc=0,x=0;     cin>> a>> b;
   
    gc= __gcd(a,b);

    while(b > 1 and gc > 1){
        b /= gc;
        gc = __gcd(a, b);
    }

    if(b>1) cout<< "No" <<nn;
    else cout<< "Yes" <<nn;
 }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    while(t--)   solve();
    
    return 0;
}