//**********In the name of Allah, most Gracious and Merciful******
//Sep/24/2022 05:16UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn  "\n" 
using namespace std;

void solve(){
    ll n=0,x=0,sum=0;
    cin >> n;
    ll arr[n]{};
    for(ll i=0;i<n;i++) cin >> arr[i];
    vector<ll>op;
    sort(arr,arr+n);
    for(ll i=1;i<(n-1);i++){
        sum+=abs((arr[i]-arr[i+1]));
        sum+=abs(arr[i]-arr[i-1]);
        op.push_back(sum);
        sum=0;
    }
    cout<<*(min_element(op.begin(),op.end()))<<nn;
 
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