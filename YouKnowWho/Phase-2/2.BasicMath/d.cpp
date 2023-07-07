#include<bits/stdc++.h>
#define ll long long
#define limit 1e17
using namespace std;


void solve(){
    ll n,cost1=0,cost2 = 0, cost = 0,c1 = 0,c2 = 0,c = 0,i=1,batti = 0,f1=0,f2=0,ans = 0;   cin >> n;
    vector<ll>vec(n,0);
    for(auto &x : vec)  cin >> x;

    sort(vec.begin(),vec.end());
    n--;

    ll maxi = vec[n];
    c1 = floor(pow(maxi,1.0/n));
    c2 = ceil(pow(maxi,1.0/n));

   for(ll i = 0; i <= n; i++){
        if(f1 == 0){
            cost1 += abs(vec[i]-(ll)pow(c1,i));
            if(cost1 >= limit)
                f1 = 1;
        }

        if(f2 == 0){
            cost2 += abs(vec[i]-(ll)pow(c2,i));
            if(cost2 >= limit)
                f2 = 1;
        }

        cost += abs(vec[i] - 1);
   }
    ans = min(cost,min(cost1,cost2));
   cout << ans << "\n";
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    // cin >> t;
    for(ll i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}