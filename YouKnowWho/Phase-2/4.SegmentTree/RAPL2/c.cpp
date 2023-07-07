#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 3e4 + 7, inf = 1e9;
class Node {
    public:
        ll mx,  area;
        Node() {
            mx = inf, area = 0;
        }
        Node(int x, int y) {
            mx = x, area = y;
        }
};

ll arr[N];
Node tree[4 * N];

void pull(int node, int b, int e) {
    ll left = 2 * node, right = 2 * node + 1;

    ll mxP = min(tree[left].mx, tree[right].mx);
    ll mxA = mxP * (e - b + 1);
    tree[node].mx = min(tree[node].mx, mxP);
    tree[node].area = max(tree[node].area, mxA);
    tree[node].area = max(tree[node].area, max(tree[left].area, tree[right].area));
}

void build(ll node,ll b,ll e){
    if(b == e){
        tree[node] = Node(arr[b], arr[b]);	//***change this
        return;
    }
    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b + e) >> 1;
    build(left,b,mid);
    build(right,mid + 1,e);
    pull(node, b, e);
}

Node query(ll node,ll b,ll e, ll l, ll r){
    if(b > r or e < l)
        return Node(inf, 0);   // *** change this with appropiate value
    if(b >= l and e <= r)
        return tree[node];
return Node(0, 0);
}

void solve(){
    int n; cin >> n;

    for(int i = 1; i <= n; i++) cin >> arr[i];

    build(1, 1, n);

    cout << query(1, 1, n, 1, n).area << "\n";
    ll ans = 0;
    for(int i = 1; i <= 4 * n; i++) {
        ans = max(ans, tree[i].area);
    }
 
    cout << ans << "\n";
    Node temp;
    for(int i = 0; i < N; i++) {
        tree[i] = temp;
    }
}
 
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case " << i << ": ";
        solve();
    }
    
    return 0;
}
/*
7
1 2 3 4 5 6 7
expected : 16
given : 15
*/