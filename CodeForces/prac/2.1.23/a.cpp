#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n = 0, cnt = 0 , neg = 0,cont=0;  cin >> n;
    vector<ll> vec(n,0);
    for(auto &x: vec) cin >> x;

    neg = count(vec.begin(),vec.end(),-1);

    if(neg != 0 ){
            for(ll i = 0; i < n-1; i++){
                if(vec[i] == -1 and vec[i+1]== -1){
                    cont = 1;
                    break;
                }
            }
    }
    partial_sum(vec.begin(),vec.end(), vec.begin());
    // for(auto x : vec) cout << x << " ";
    if(cont == 1) cout << vec[n-1]+4 <<"\n";
    else if(cont == 0 and neg > 0) cout << vec[n-1] << "\n";
    else if(neg == 0) cout << vec[n-1]-4 << "\n";
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    for(ll i = 1; i<=t; i++){
        solve();
    }
    
    return 0;
}