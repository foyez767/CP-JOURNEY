#include<bits/stdc++.h>
#define ll long long
#define N 100000
using namespace std;

vector<ll>spf(N+1,0),divCnt(N+1,0),vec;

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
    for(ll i = 1; i <= N; i++){
        ll x = i;
        map<ll,ll>cnt;
        while(x != 1){
            cnt[spf[x]]++;
            x /= spf[x];
        }
        ll cnt2 = 1;
        for(auto m : cnt){
            cnt2 *= (m.second+1);
        }
        divCnt[i] = cnt2;
        cnt.clear();
    }
}

void divisrCnt(){
    for(ll i = 1; i <= N; i++){
        for(ll j = i; j <= N; j += i){
            divCnt[j]++;
        }
    }
}

void Separate(){
    for(ll i = 1; i <= N; i++){
        if(divCnt[i] > 3 )
            vec.push_back(i);
    }

}

void solve(){
    // cout << vec.size();
    for(ll i = 1,cnt = 0; i <= N; i++){
        if(divCnt[i] <= 3) continue;
        ll x = i;
        for(ll j = 2; j * j <= x; j++){
            if(x % j == 0 and x % (x/j) == 0){
               if(divCnt[x] % divCnt[j] == 0 and divCnt[x] % divCnt[x/j] == 0)
                    cnt++;
                else break;  
            }
        }

        if(cnt == 108){
            cout << i << "\n";
            cnt = 0;
        }
    }
    // for(auto v : vec) cout << v << " ";
    // cout << vec.size();
 
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    // smallestPF();
    // divisorCnt();
    // Separate();
    // cin >> t;
    divisrCnt();
    for(ll i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}