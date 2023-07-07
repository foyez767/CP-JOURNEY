#include<bits/stdc++.h>
#define ll long long
#define N 100000
using namespace std;

vector<ll>vec(N+1,0),spf(N,0);
map<ll,vector<ll>>cnter;

void smallestPF(){
    for(ll i = 1; i <= N ; i++) spf[i] = i;
    for(ll i = 2; i * i <= N; i++){
        if(spf[i] == i){
            for(ll j = i * i ; j <= N; j += i)
                spf[j] = i;
        }
    }
}

void divisorCnt(){
    vec[1] = 1;
    for(ll i = 2; i <= N; i++){
        ll x = i;
        map<ll,ll>mp;
        while(x != 1){
            mp[spf[x]]++;
            x /= spf[x];
        }
        ll cnt = 0,disor=1;
        for(auto m : mp){
            cnt = m.second * 2;
            disor *= (cnt + 1);
        }
        vec[i] = disor;
        cnter[disor].push_back(i*i);
        mp.clear();
    }
}

void solve(){
    ll k,lo,hi; cin >> k >> lo >> hi;
    auto ans1 = lower_bound(cnter[k].begin(),cnter[k].end(),lo);
    auto ans2 = upper_bound(cnter[k].begin(),cnter[k].end(),hi);
    ll ans = ans2 - ans1 ;
    cout << ans << "\n";
    

}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    smallestPF();
    divisorCnt();
    cin >> t;
    for(ll i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}