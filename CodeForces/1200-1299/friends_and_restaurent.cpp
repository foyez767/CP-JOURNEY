//**********In the name of Allah, most Gracious and Merciful******
//	Sep/25/2022 16:15UTC-
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
  
void solve(){
    ll n=0,x=0;
    cin>>n;
    ll cost [n] {} , budget[n] {},day=0;
    vector<ll> diff;
    vector<ll> bug_diff;
    for(ll i=0; i<n; i++) cin>> cost[i];
    for(ll i=0; i<n; i++) cin>> budget[i];

    for(ll i=0; i<n; i++){
        diff.push_back(budget[i]-cost[i]);
    }
    sort(diff.rbegin(),diff.rend());

   vector<pair<ll,ll>> vec;
    ll j=diff.size()-1,i=0;
    while((j-i)>=1){
        if((diff[i]+diff[j])>=0){
            vec.push_back(make_pair(i,j));
            i++;
            j--;
        }else{
            j--;
        }
    }
    
    cout<< vec.size() <<nn;
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