#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e6 + 7;
const int P1 = 137, P2 = 277, mod1 = 1e9 + 7, mod2 = 1e9 + 9;
 
int power(long long n,long long k, int mod){
    int ans = 1 % mod; n %= mod; if(n < 0) n += mod;
 
    while(k){
        if(k & 1) ans = (long long) ans * n % mod;
        n = (long long) n * n % mod;
        k >>= 1;
    }
return ans;
}
 
int invp1, invp2;
pair<int,int> pw[N], invpw[N];
 
void precal(){
    pw[0] = {1, 1};
 
    for(int i = 1; i < N; i++){
        pw[i].first  = 1LL * pw[i - 1].first * P1 % mod1;
        pw[i].second = 1LL * pw[i - 1].second * P2 % mod2;
    }
 
    invp1 = power(P1, mod1 - 2, mod1);
    invp2 = power(P2, mod2 - 2, mod2);
 
    invpw[0] = {1, 1};
 
    for(int i = 1; i < N; i++){
        invpw[i].first = 1LL * invpw[i - 1].first * invp1 % mod1;
        invpw[i].second = 1LL * invpw[i - 1].second * invp2 % mod2;
    }
}
//hash of a string
pair<int,int> stringHash(string s){
    int n = s.size();
 
    pair<int,int> hs = {0, 0};
 
    for(int i = 0; i < n; i++){
        hs.first += 1LL * s[i] * pw[i].first % mod1;
        hs.second += 1LL * s[i] * pw[i].second % mod2;
        hs.first %= mod1;
        hs.second %= mod2;
    }
return hs;
}
 
pair<int,int> pref[N];
 
void build(string s){
    int n = s.size();
 
    for(int i = 0; i < n; i++){
        pref[i].first = 1LL * s[i] * pw[i].first % mod1;
        if(i) pref[i].first = (pref[i].first + pref[i - 1].first) % mod1;
        pref[i].second = 1LL * s[i] * pw[i].second % mod2;
        if(i) pref[i].second = (pref[i].second + pref[i - 1].second) % mod2;
    }
}
 
//substring hash
pair<int,int> getHash(int i, int j){
    assert(i <= j);
    pair<int,int> hs = {0, 0};
 
    hs.first = pref[j].first;
    if(i) hs.first = (hs.first - pref[i - 1].first + mod1) % mod1;
    hs.first = 1LL * hs.first * invpw[i].first % mod1;
 
    hs.second = pref[j].second;
    if(i) hs.second = (hs.second - pref[i -1].second + mod2) % mod2;
    hs.second = 1LL * hs.second * invpw[i].second % mod2;
return hs;
}


void solve(){
    precal();

    string s; cin >> s;

    build(s);

    int n = s.length();
    int  k = n - 1;
    vector<int> ans;
    // set<pair<int,int>> se;

    for(int i = 0; i < n - 1; i++){
        // se.insert(getHash(0, i));
        pair<int,int> p1 = getHash(0, i);
        pair<int,int> p2 = getHash(k, n - 1);
        if(p1 == p2){
            ans.push_back(i + 1);
        }
        // if(getHash(0, i) == getHash(k, n - 1));{
        //     ans.push_back(i + 1);
        // }
        k--;
    }

    // int len = 0;
    // for(int i = n - 1; i > 0; i--){
    //     if(se.find(getHash(i, n - 1)) != se.end()){
    //         len = n - i;
    //         ans.push_back(len);
    //     }
    // }

    sort(ans.begin(), ans.end());

    for(auto a : ans) cout << a << " "; cout << "\n";
}
 
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}