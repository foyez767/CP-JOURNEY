//if i know what is the maximum and minimum value in range [i to i + d - 1],then their maximum difference is the answer
#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 1e5 + 9, inf = 1e9;

class Node{
    public: 
        ll mx, mini;
        Node () {
            mx = 0, mini = inf;
        }
        Node(ll a, ll b) {
            mx = a, mini = b;
        }
};

ll arr[N];
Node tree[4*N];

Node combine(Node a, Node b){
    Node ans;
    ans.mx = max(a.mx, b.mx);
    ans.mini = min(a.mini, b.mini);
return ans;
}

void pull(ll node) {
    ll left = 2 * node, right = 2 * node + 1;

    tree[node].mx = max(tree[left].mx, tree[right].mx);
    tree[node].mini = min(tree[left].mini, tree[right].mini);
}

void build(ll node,ll b,ll e){
    if(b == e){
        tree[node] = Node (arr[b], arr[b]);	//***change this
        return;
    }
    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b + e) >> 1;
    build(left,b,mid);
    build(right,mid+1,e);

    pull(node);
}

Node query(ll node,ll b,ll e, ll l, ll r){
    if(b > r or e < l)
        return Node (0LL, inf);   // *** change this with appropiate value
    if(b >= l and e <= r)
        return tree[node];

    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b + e) >> 1;
 
return combine(query(left,b,mid,l,r),query(right,mid+1,e,l,r));
}

void solve(){
    memset(tree, 0, sizeof(tree));
    int n, d; cin >> n >> d;

    for(int i = 1; i <= n; i++) cin >> arr[i];

    build(1, 1, n);

    ll diff = 0;
    for(int i = 1; i + d <= n; i++) {
        Node ex = query(1, 1, n, i, i + d - 1);
        
        diff = max(diff, ex.mx - ex.mini);
    }

    cout << diff << "\n";
}
 
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case " << i << ": ";
        solve();
    }
    
    return 0;
}