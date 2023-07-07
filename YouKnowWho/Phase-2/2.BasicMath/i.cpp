//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll n,x;     cin>> n >> x;
    ll num = x , cnt = 1;

    while(true){
        if(num % n == 0)
            break;
        
        num = (num * 10 + x ) % n;
        cnt++;
    }
    cout<< cnt <<nn;;
 }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    for(ll i = 1; i<=t; i++){
        cout<< "Case " << i <<": ";
        solve();
    }    
    return 0;
}