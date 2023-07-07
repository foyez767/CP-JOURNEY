#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 7;
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

class Hash{
    public:
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

}ts, tst;

void solve(){
    precal();
    string s , st; cin >> s >> st;

    ts.build(s);
    tst.build(st);
    int n = s.length();
    map<pair<int,int>,int> mp;
// all possible divisors of length 1 .. s.length()
    for(int len = 1; len <= s.length(); len++) {
        if(s.length() % len) continue;  //if ttl length is not divided by current len , then current len won't be a divisor of the given string
        bool ok = true;
        pair<int,int> p = ts.getHash(0, len - 1);

        for(int i = 0; i + len - 1 < s.length(); i += len){
            ok &= (ts.getHash(i, i + len - 1) == p);

            if(!ok)
                break;
        }

        if(ok) {
            mp[p] = 1;
        }
    }

    int cnt = 0;
    n = st.length();

    for(int len = 1; len <= st.length(); len++) {
        if(st.length() % len != 0) {
            continue;
        }
        bool ok = true, ok2 = false;

        int i = 0;
        for(; i + len - 1 < st.length(); i += len) {
            ok &= mp[tst.getHash(i, i + len - 1)];
            if(!ok) break;
        }

        if(ok) cnt++;
    }
    
    cout << cnt << "\n";
 
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