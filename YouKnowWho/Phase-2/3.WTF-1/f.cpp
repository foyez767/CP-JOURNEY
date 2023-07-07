#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll>divs;

void divisors(ll n){
    for(ll i = 2; i * i <= n; i++){
        if(n % i == 0){
            divs.push_back(i);
            if(i != (n/i)){
                divs.push_back(n/i);
            }
        }
    }
    sort(divs.begin(),divs.end());

}

void solve(){
    ll a, b;    cin >> a >> b;
    
    if(a == b){
        cout << "infinity\n";
        return;
    }else{
        divisors(a-b);
        for(ll i = 0; i <divs.size(); i++){
            ll x = divs[i];
            ll y = x * (a/x);
            if((a-b) == y){
                cout << a / x << "\n";
                return;
            }
        }


    }
 
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