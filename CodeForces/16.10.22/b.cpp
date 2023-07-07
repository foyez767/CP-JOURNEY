//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll n=0,q=0,x=0,no_od=0,no_ev=0,sum_od=0,sum_ev=0,ty=0;     cin>> n>> q;
    vector<ll> vec(n,0);
    for(auto &x: vec)   cin>> x;
    
    for(ll i=0; i<n; i++){
        if(vec[i]%2==0){
            no_ev++;
            sum_ev+=vec[i];
        }else{
            no_od++;
            sum_od+=vec[i];
        }
    }

    while(q--){
        cin>> ty >>x;
        if(ty==0 and x%2==0){
            sum_ev+=(x*no_ev);
        }else if(ty==0 and x%2!=0){
            no_od+=no_ev;
            sum_ev+=(x*no_ev);
            no_ev=0;
        }else if(ty==1 and x%2==0){
            sum_od+=(x*no_od);
        }else if(ty==1 and x%2!=0){
            no_ev+=no_od;
            sum_od+=(no_od*x);
            no_od=0;
        }

        cout<< (ll)(sum_ev+sum_od) <<nn;
    }
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}