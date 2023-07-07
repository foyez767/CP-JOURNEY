#include<bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
    ll d, n,cnt = 0,x,cnt2 = 0;    cin >> d >> n;
    vector<ll>vec(n+1,0);
    for(ll i = 1; i <=n; i++){
        cin >> x;
        x %= d;
        vec[i] = x;
    }
    partial_sum(vec.begin(),vec.end(),vec.begin());
    
    for(ll i = 1; i <= n; i++)
        vec[i] %= d;

    ll freq[d+1] {};

    for(ll i = 0; i <= n; i++){
        cnt += freq[vec[i]];
        freq[vec[i]]++;
    }

    cout << cnt << "\n";

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