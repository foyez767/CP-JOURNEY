//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define nn "\n"
using namespace std;

void solve(){
    ll n=0,k=0,sum=0,temp=0,cnt=0,temp_k;     cin>> n>> k;
    temp_k=k;
    vector<ll> counter(k+1,0);
    counter[1]=1;
    counter[k]=1;
    for(ll i=2; i*i<=k; i++)
    {
        if(k%i==0){
            cnt=0;
            while(k%i==0){
                cnt++;
                k/=i;
            }
            counter[i]=cnt;
        }
    }
    if(k>1) counter[k]=1;

    for(ll i=1; i<=temp_k; i++)
    {
        if(counter[i])
            cout<< i <<": "<<counter[i]<<endl;
    }
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
// cin>>t;
solve();

// for(ll i=1; i<=t; i++){
//     cout<<"Case "<<i<<": ";
//     solve();
// } 
    
    return 0;
}