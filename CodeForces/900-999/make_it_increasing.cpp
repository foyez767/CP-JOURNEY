//Sep/13/2022 09:13UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll n=0,flag=0,cnt=0;
    cin>>n;
    ll arr[n] {};
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    } 
    for(ll i=n-1;i>0;i--){
            while(arr[i]<=arr[i-1] && arr[i-1]!=0){
                arr[i-1]=(arr[i-1]/2);
                cnt++;
            }
            if(arr[i]==arr[i-1]){
                    cout<<-1<<nn;
                    return ;
                }
        }
    cout<<cnt<<nn;
         
}
  
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--) solve();
     
    return 0;
}