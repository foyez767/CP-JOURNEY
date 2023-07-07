#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll make_it_binary(ll n){
    ll bin = 0, p = 1;
    while(n > 0){
        ll last_bit = (n & 1);
        bin += (last_bit*p);
        
        p *= 10;
        n = (n>>1);
    }
return bin;
}

void solve(){
    ll x,s = 0,p = 0, cnt = 1;   cin >> x;
    s = 2 * x;          // s = addition(a,b), x = xor(a,b)
    p = (s - x) >> 1;   // p = AND(a,b)

    bitset< 32 > a (x) , b (p);

    if(p != (s - x) / 2.0){
        cout << -1 << "\n";
        return;
    }

    for(int i = 0; i <32; i++){
        if(a[i] ^ b[i] == 1 and a[i] & b[i] != 0){
            cout << 0 << "\n";
        }
        if(a[i] ^ b[i] == 0) cnt *= 1;
        else if (a[i] ^ b[i] ==1 and a[i] & b[i == 0]) cnt *= 2;
    }

    cout << cnt << "\n";

}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    // cin>>t;
    for(ll i = 1; i<=t; i++){
        solve();
    }
    
    return 0;
}