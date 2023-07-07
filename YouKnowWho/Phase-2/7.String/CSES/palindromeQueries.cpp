#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 2e5 + 7;
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

pair<int,int> arr[N];

class segT {
    private:
        pair<int,int> tree[4 * N];
    public:
        pair<int,int> combine(pair<int,int> a, pair<int,int> b){
            return {(a.first + b.first) % mod1, (a.second + b.second) % mod2};
        }

        void pull(ll node){
            ll left = 2 * node, right = 2 * node + 1;
            tree[node] = {(tree[left].first + tree[right].first) % mod1, (tree[left].second + tree[right].second) % mod2};
        }

        void build(ll node,ll b,ll e){
            if(b == e){
                tree[node] = arr[b];	//***change this
            return;
            }
            ll left = 2 * node, right = 2 * node + 1;
            ll mid = (b + e)/2;
            build(left,b,mid);
            build(right,mid+1,e);
            //***change this
            pull(node);
        }

        pair<int,int> query(ll node,ll b,ll e, ll l, ll r){
            if(b > r or e < l)
                return {0, 0};   // *** change this with appropiate value
            if(b >= l and e <= r)
                return tree[node];

            ll left = 2 * node, right = 2 * node + 1;
            ll mid = (b + e)/2;
 
        return combine(query(left,b,mid,l,r),query(right,mid+1,e,l,r));
        }

        void update(ll node,ll b,ll e, ll i,pair<int,int> x){
            if(i < b or i > e)
                return;
            if(b == e and b == i){
                tree[node] = x;     // ****Update with appropiate value
                return;
            }

            ll left = 2 * node, right = 2 * node + 1;
            ll mid = (b + e)/2;
            update(left,b,mid,i,x);
            update(right,mid+1,e,i,x);
            //***change this
            pull(node);
            }
        }ts, tr;

pair<int,int> sub_hash(pair<int,int> hash, int x) {
    return {1LL * hash.first * invpw[x - 1].first % mod1, 1LL * hash.second * invpw[x - 1].second % mod2};
}

void solve() {
    precal();
    int n, q; cin >> n >> q;

    string s, st; cin >> s;
    st = s;
    reverse(st.begin(), st.end());

    for(int i = 0; i < n; i++){
        arr[i + 1].first = (1LL * s[i] * pw[i].first) % mod1;
        arr[i + 1].second = (1LL * s[i] * pw[i].second)  % mod2;
    }

    ts.build(1, 1, n);

    for(int i = 0; i < n; i++) {
        arr[i + 1].first = (1LL * st[i] * pw[i].first) % mod1;
        arr[i + 1].second = (1LL * st[i] * pw[i].second) % mod2;
    }

    tr.build(1, 1, n);

    while(q--) {
        int ty; cin >> ty;

        if(ty == 1) {
            int idx; char ch; cin >> idx >> ch;
            pair<int,int> p ;
            //updating in given string
            p = {(1LL * ch * pw[idx - 1].first) % mod1, (1LL * ch * pw[idx - 1].second) % mod2};
            ts.update(1, 1, n, idx, p);
            //updating in reverse version of the string
            p = {(1LL * ch * pw[n - idx].first) % mod1, (1LL * ch * pw[n - idx].second) % mod2};
            tr.update(1, 1, n, n - idx + 1, p);
        } else {
            int a, b; cin >> a >> b;

            pair<int,int> p1 = ts.query(1, 1, n, a, b);
            pair<int,int> p2 = tr.query(1, 1, n, n - b + 1, n - a + 1);

            if(sub_hash(p1, a) == sub_hash(p2, n - b + 1)) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

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