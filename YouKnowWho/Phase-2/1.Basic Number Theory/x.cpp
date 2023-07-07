//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll n=0,sum=0;     cin>> n;

    for(ll i=1; i*i<=n; i++){
        if(n % i==0){
            sum+=i;
            if(i != (n/i))
                sum+=(n/i);
        }
    }

    cout<< sum - n <<nn;
 
 }
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    while(t--)   solve();
    
    return 0;
}