#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 1e5 + 7;

class Node {
    public :
        int zero, one, two;
        Node() {
            zero = 0, one = 0, two = 0;
        }

        Node operator+(const Node &node) {
            Node ans;
            ans.zero = zero + node.zero;
            ans.one = one + node.one;
            ans.two = two + node.two;
        return ans;
        }
};

Node tree[4 * N];
ll lazy[4 * N];

void pull(ll node){
    ll left = 2 * node, right = 2 * node + 1;
    tree[node] = (tree[left] + tree[right]);    // *** change this
}

void push(ll node, ll b, ll e){     // *** change this
    if(lazy[node] % 3 == 0) {
        lazy[node] = 0;
        return;
    }

    int add = lazy[node] % 3;

    if(add == 1) {
        int tz = tree[node].zero, to = tree[node].one;
        tree[node].zero = tree[node].two;
        tree[node].one = tz;
        tree[node].two = to;
    } else {
        int tz = tree[node].zero;
        tree[node].zero = tree[node].one;
        tree[node].one = tree[node].two;
        tree[node].two = tz;
    }

    if(b != e){
        ll left = 2 * node, right = 2 * node + 1;
        lazy[left] = lazy[left] + add;
        lazy[right] = lazy[right] + add;
    }
 
    lazy[node] = 0;
}
 
Node combine(Node a,Node b){ // *** change this
    return (a + b);
}

void build(int node, int b, int e) {
	lazy[node] = 0; 
	if (b == e) {
		tree[node].zero = 1;
		tree[node].one = 0;
		tree[node].two = 0;
		return;
	}
	int mid = (b + e) >> 1;
    int left = 2 * node , right = 2 * node + 1;
	build(left, b, mid);
	build(right, mid + 1, e);
	pull(node);
}
 
void update(ll node,ll b,ll e,ll l,ll r,ll x){
    push(node,b,e);
 
    if(b > r or e < l)
        return ;
    if(b >= l and e <= r){
        lazy[node] += x;     //***set lazy or value of propagation
        push(node,b,e);
    return;
    }
 
    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b + e) / 2;
    update(left,b,mid,l,r,x);
    update(right,mid+1,e,l,r,x);
 
    pull(node);
}
 
Node query(ll node,ll b,ll e,ll l,ll r){
    push(node,b,e);
    if(b > r or e < l)
        return Node();		//***change this
    if(b >= l and e <= r)
        return tree[node];
 
    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b + e) / 2;
return combine(query(left,b,mid,l,r),query(right,mid+1,e,l,r));
}

void solve(){
    memset(tree, 0, sizeof(tree));
    memset(lazy, 0, sizeof(lazy));

    int n, q; cin >> n >> q;

    build(1, 1, n);
    
    while(q--) {
        int ty, l , r; cin >> ty >> l >> r;

        if(ty == 0) {
            update(1, 1, n, l + 1, r + 1, 1);
        } else {
            cout << query(1, 1, n, l + 1, r + 1).zero << "\n";
        }
    }
 
}
 
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case " << i << ": \n";
        solve();
    }
    
    return 0;
}