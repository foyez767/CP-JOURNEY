#include<bits/stdc++.h>
using namespace std;

const int N = 2e6 + 7;
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
        pref[i].first = (1LL * s[i] * pw[i].first) % mod1;
        if(i) pref[i].first = (pref[i].first + pref[i - 1].first) % mod1;
        pref[i].second = (1LL * s[i] * pw[i].second) % mod2;
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
    int n, k; cin >> n >> k;
    string s; cin >> s;

    s += s; //cyclic shift
    build(s);

    int g; cin >> g;

    map<pair<int,int>,int> id;
    set<pair<int,int>> use, dupli;
//taking input names of all games
    for(int i = 1; i <= g; i++) {
        string t;   cin >> t;
        auto hash = stringHash(t);
        id[hash] = i;
        use.insert(hash), dupli.insert(hash);
    }

    vector<int> ans;
//cyclic shift goes from 0 to k - 1
    for(int stIndx = 0; stIndx < k; stIndx++) {
        for(int j = stIndx; j + k <= s.length(); j += k) {
            auto hash = getHash(j, j + k - 1);
            auto it = use.find(hash);

            if(it != use.end()) {
                ans.push_back(id[hash]);
                use.erase(it);
            } else {
                use = dupli;
                break;
            }
        }
    //if we found a match, then print it, otherwise continue the process
        if(ans.size() == n) {
            cout << "YES\n";
            for(auto a : ans) cout << a << " "; cout << "\n"; 
            return;
        } else{
            ans.clear();
        }
    }

    cout << "NO\n";
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