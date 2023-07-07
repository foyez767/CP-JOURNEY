#include<bits/stdc++.h>
#define ll long long
using namespace std;
//returns all prime factor of n , pair(smf,cnt)
void primeFactor(vector<pair<ll,ll>> &vec, ll n){
    for(ll i = 2; i * i <= n; i++){
        if(! (n % i)){
            ll cnt = 0;
            while(! (n % i)){
                cnt ++;
                n /= i;
            }
            vec.push_back(make_pair(i,cnt));
        }
    }
    if(n > 1)
        vec.push_back(make_pair(n,1));
}

void solve(){
    ll n;   cin >> n;
    vector<pair<ll,ll>>p;
    primeFactor(p,n);
    for(auto v: p){
        cout<< v.first << " " << v.second <<endl;
    }

 
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    // cin>>t;
    for(ll i = 1; i<=t; i++){
        solve();
    }
    

    return 0;
}