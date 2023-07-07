//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll l=0,r=0,n=0,m=0,lcm=0,gc=0;       cin>> n>> m>> l>> r;
    
    gc= __gcd(n,m);

    (n % gc==0) ? lcm= (n/gc) * m : lcm= (m/gc) * n;

    if(n / gc > r / m){
        cout << 0 <<nn;
        return ;
    }

    if(l % lcm !=0)
        l= (l+lcm- l%lcm);
    if(r % lcm !=0)
        r= (r-r%lcm);

    cout<< (r-l+lcm)/lcm <<nn;
 }
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    // cin>>t;
    while(t--)   solve();
    
    return 0;
}