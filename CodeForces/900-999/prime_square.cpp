//**********In the name of Allah, most Gracious and Merciful******
//Sep/24/2022 07:57UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

  
void solve(){
    ll n=0,k=0,a=0,b=0,c=0;
    cin>>n;
    if(n%2 == 0){
        for(ll i=1; i<=n; i++){
            for(ll j=1;j<=n;j++){
                if(i==j || j==(n-k)){
                    cout<<1<<" ";
                    if(j==(n-k)) k++;
                }else {
                    cout<<0<<" ";
                }

            }
            cout<<nn;
        }

    }else{
        a=n/2;
        b=(n+1)/2;
        c=((n+1)/2)+1;
         for(ll i=1; i<=n; i++){
            for(ll j=1;j<=n;j++){
                if(i==j || j==(n-k) || (i==a && j==b) || (i==b && j==c)){
                    cout<<1<<" ";
                    if(j==(n-k)) k++;
                }else {
                    cout<<0<<" ";
                }

            }
            cout<<nn;
        }

    }
    
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--){
    solve();
}
    
    return 0;
}