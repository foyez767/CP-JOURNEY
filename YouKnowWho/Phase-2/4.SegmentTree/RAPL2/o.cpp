#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Node {
    public: 
    int sum, best, mx_left, mx_right;
    Node(){
        sum = 0, best = 0, mx_left = 0, mx_right = 0;
    }
    Node(int sm, int bst, int left, int right) {
        sum = sm;
        best = bst;
        mx_left = left;
        mx_right = right;
    }
};

const ll N = 5e4 + 9, inf = 1e7;
ll arr[N];
Node tree[4*N];

Node combine(Node a, Node b){
    Node ans;
    ans.sum = a.sum + b.sum;
    ans.mx_left = max(a.mx_left, a.sum + b.mx_left);
    ans.mx_right = max(b.mx_right, b.sum + a.mx_right);
    ans.best = max(ans.sum, a.mx_right + b.mx_left);
    ans.best = max(ans.best, max(a.best, b.best));
    ans.best = max(ans.best, max(ans.mx_left, ans.mx_right));
return ans;
}

void pull(ll node) {
    ll left = 2 * node, right = 2 * node + 1;

    tree[node].sum = tree[left].sum + tree[right].sum;
    tree[node].mx_left = max(tree[left].mx_left, tree[left].sum + tree[right].mx_left);
    tree[node].mx_right = max(tree[right].mx_right, tree[right].sum + tree[left].mx_right);

    tree[node].best = max(tree[node].sum , tree[left].mx_right + tree[right].mx_left);
    tree[node].best = max(tree[node].best, max(tree[left].best, tree[right].best));
    tree[node].best = max(tree[node].best, max(tree[node].mx_left, tree[node].mx_right));
}

void build(ll node,ll b,ll e){
    if(b == e){
        tree[node] = Node(arr[b], arr[b], arr[b], arr[b]);	//***change this
        return;
    }
    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b + e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    //***change this
    pull(node);
}
Node query(ll node,ll b,ll e, ll l, ll r){
    if(b > r or e < l)
        return Node(-inf, -inf, -inf, -inf);   // *** change this with appropiate value
    if(b >= l and e <= r)
        return tree[node];

    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b+e)/2;
 
return combine(query(left,b,mid,l,r),query(right,mid+1,e,l,r));
}

void solve(){
    int n; cin >> n;

    for(int i = 1; i <= n; i++) cin >> arr[i];

    build(1, 1, n);

    int q; cin >> q;

    while(q--) {
       int l, r; cin >> l >> r;

       Node ans = query(1, 1, n, l, r);

       cout << ans.best << "\n";
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