#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 5e3 + 7;
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
        hs.first = (1LL * hs.first * invpw[i].first) % mod1;

        hs.second = pref[j].second;
        if(i) hs.second = (hs.second - pref[i -1].second + mod2) % mod2;
        hs.second = (1LL * hs.second * invpw[i].second) % mod2;
    return hs;
    }
} ts, tr;

int n, memo[N][N];

//[i, j] substring palindrome? [hash value of main string from {i, j}] == [hash value of reverse string from [n - j - 1, n - i - 1]]
bool isPalindrome(int i, int j) {
    return (ts.getHash(i, j) == tr.getHash(n - j - 1, n - i - 1));
}

//no of palindromic substring in between [i, j]
int rec(int i, int j) {
    if(i > j or i >= n or j < 0)
        return 0;
    if(memo[i][j] != -1) {
        return memo[i][j];
    }
    int ans = isPalindrome(i, j);   //if [i, j] palindrome then it will give 1, not palindrome then 0
    ans += rec(i + 1, j);   //  how many substring in between [i + 1, j] is palindrome, we need to add this
    ans += rec(i, j - 1);   //how many substring in between [i, j - 1] is palindrome,we need to add this
    ans -= rec(i + 1, j - 1); //how many substring in between [i + 1, j - 1] is palindrome, we need to subtract this
                        // because we are adding this two times by [i + 1, j] and [i, j - 1] this two paths

    return memo[i][j] = ans;
}

/*
[i + 1, j] next path: [i + 1 + 1, j] or [i + 1, j - 1]
[i, j - 1] next path: [i, j - 1 - 1] or [i + 1, j - 1]
*/

void solve(){
    memset(memo, -1, sizeof(memo));
    precal();

    string s; cin >> s;
    n = s.size();
    string st = s;
    reverse(st.begin(), st.end());

    ts.build(s);
    tr.build(st);
 
    rec(0, n - 1);

    int q; cin >> q;

    while(q--) {
        int l, r; cin >> l >> r;

        cout << memo[l - 1][r - 1] << "\n"; //0 based indexing
    }
}
 
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}