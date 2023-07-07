//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define lim 5000000
#define nn "\n"
using namespace std;

vector<unsigned long long> phi(lim+5, 0);

void solve(){
    ll a=0,b=0,sum=0;     cin>> a >> b;

    cout<< phi[b] - phi[a-1] <<nn;
 }

void calculatePhi(){
    for(ll i=0; i<=lim; i++)
        phi[i] = i;
    for(ll i =2; i<=lim; i++){
        if(phi[i] == i){
            for(ll j= i; j<=lim; j+=i)
                phi[j] -= phi[j]/i;
        }
        phi[i]= (phi[i]*phi[i]);
        phi[i] += phi[i-1];
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;

    cin>>t;
    calculatePhi();
    for(ll i=1; i<=t; i++){
        cout<< "Case "<<i<<": ";
        ll a=0,b=0,sum=0;     cin>> a >> b;
        cout<< phi[b] - phi[a-1] <<nn;
    }
    
    return 0;
}