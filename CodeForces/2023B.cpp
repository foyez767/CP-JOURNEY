#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n,ans = 0,ans2 = 1;   cin >> n;

    map<ll,ll>mp;

    for(ll i = 2; i * i <= n; i++){
        if(n % i == 0){
            while(n % i == 0){
                mp[i]++;
                n /= i;
            }
        }
    }
    // for(auto m: mp) cout << m.first << " : " << m.second << endl;
    ll cnt = 0;
 while(cnt < 3){
        for(auto m : mp){
            if(m.second >= 1){
                m.second--;
                ans2 *= m.first;
                cout << m.first << " : " << m.second << endl;
            }
        }
        ans += ans2;
        ans2 = 1;
        cnt++;
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