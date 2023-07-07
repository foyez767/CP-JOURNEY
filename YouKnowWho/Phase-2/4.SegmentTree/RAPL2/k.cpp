#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 1e5 + 7;
ll arr[N],tree[4*N],lazy[4*N];

void pull(ll node){
    ll left = 2 * node, right = 2 * node + 1;
    tree[node] = (tree[left] + tree[right]);    // *** change this
}

void push(ll node, ll b, ll e){     // *** change this
    if(lazy[node] == -1)
        return;
    tree[node] = lazy[node] * (e - b + 1);

    if(b != e){
        ll left = 2 * node, right = 2 * node + 1;
        lazy[left] = lazy[node];
        lazy[right] =  lazy[node];
    }
 
    lazy[node] = -1;
}
 
ll combine(ll a, ll b){ // *** change this
    return (a + b);
}
 
void update(ll node,ll b,ll e,ll l,ll r,ll x){
    push(node,b,e);
 
    if(b > r or e < l)
        return ;
    if(b >= l and e <= r){
        lazy[node] = x;     //***set lazy or value of propagation
        push(node,b,e);
    return;
    }
 
    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b + e) >> 1;
    update(left,b,mid,l,r,x);
    update(right,mid+1,e,l,r,x);
 
    pull(node);
}
 
ll query(ll node,ll b,ll e,ll l,ll r){
    push(node,b,e);
    if(b > r or e < l)
        return 0;		//***change this
    if(b >= l and e <= r)
        return tree[node];
 
    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b + e) >> 1;

return combine(query(left,b,mid,l,r),query(right,mid+1,e,l,r));
}

void primeFactor(map<ll,ll> &pf, ll n) {
    for(ll i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            while(n % i == 0) {
                pf[i]++;
                n /= i;
            }
        }
    }
    if(n > 1) {
        pf[n]++;
    }
}

void solve(){
    memset(tree, 0, sizeof(tree));
    memset(lazy, -1, sizeof(lazy));

    int n, q; cin >> n >> q;

    while(q--) {
        int ty; cin >> ty;

        if(ty == 1) {
            int i, j, v; cin >> i >> j >> v;
            update(1, 1, n, i + 1, j + 1, v);
        } else {
            ll i, j; cin >> i >> j;
            ll x = query(1, 1, n, i + 1, j + 1);
            ll y = j - i + 1;
            
            map<ll,ll> xpf, ypf;

            primeFactor(xpf, x);
            primeFactor(ypf, y);

            ll nim = 1, dim = 1;
            if(x != 0) {
                for(auto p : xpf) {
                    if(ypf[p.first] >= 1) {
                        int u = min(xpf[p.first], ypf[p.first]);
                        ypf[p.first] -= u;
                        xpf[p.first] -= u;
                    }
                }

                for(auto p : xpf) {
                    for(int i = 1; i <= p.second; i++) {
                        nim *= p.first;
                    }
                }
            }

            for(auto p : ypf) {
                for(int i = 1; i <= p.second; i++) {
                    dim *= p.first;
                }
            }

            if(dim == 1 and x != 0) {
                cout << nim << "\n";
            } else if(x == 0) {
                cout << "0\n";
            } 
            else {
                cout << nim << "/" << dim << "\n";
            }

        }
    }
}
 
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case " <<  i << ": \n";
        solve();
    }
    
    return 0;
}