#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n,k,eq = 0,seg = 0,b,e;  cin >> n >> k;
    vector<pair<ll,ll>>  vec;

    for(ll i = 0; i < n; i++){
        cin >> b >> e;
        if(b <= k and e >= k)
            vec.push_back(make_pair(b,e));
        if(b == k and e == k)
            eq++;
    }

    if(vec.size() == 0 or (n == 1 and eq == 0)){
        cout << "NO\n";
        return;
    }else if(eq){
        cout << "YES\n";
        return;
    }

    ll cnter[51] {};

    for(auto v: vec){
        for(ll i = v.first; i <= v.second; i++){
            cnter[i]++;
        }
    }

    b = cnter[k];

    for(ll i = 1 ; i <= 50; i++){
        if(i != k and cnter[i]>= b){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}