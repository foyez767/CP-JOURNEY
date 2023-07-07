#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isLucky(int n){
    string s = to_string(n);
    for(ll i = 0; i < s.length(); i++){
        if(s[i] !='4' or s[i] != '7')
            return false;
    }
return true;
}

vector<ll> vec = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};

bool isDivisible(ll n){
    for(ll i = 0; i < vec.size(); i++){
        if(n % vec[i] == 0)
            return true;
    }
return false;
}

void solve(){
    ll n;   cin >> n;
    if(isLucky(n) or isDivisible(n)) cout << "YES\n";
    else cout << "NO\n";
 
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