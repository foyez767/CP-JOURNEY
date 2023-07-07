#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Node {
    public:
        char ch;
        bool yes;
    Node() {
        ch = '/0', yes = true;
    }
    Node(char c) {
        ch = ch, yes = true;
    }
};
const ll N = 3e4 + 9;
char arr[N];
Node tree[4*N];

// ll combine(ll a,ll b){
//     return (a + b); // *** change this
// }

void pull(int node) {
    ll left = 2 * node, right = 2 * node + 1;

    if((tree[left].ch == '(' and tree[right].ch == ')')) {
        tree[node].yes = true;
    } else {
        tree[node].yes = false;
    }
}
void build(ll node,ll b,ll e){
    if(b == e){
        tree[node] = Node(arr[b]);	//***change this
        return;
    }
    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b + e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    //***change this
    // tree[node].yes = (tree[left].yes & tree[right].yes);
    pull(node);
}

// ll query(ll node,ll b,ll e, ll l, ll r){
//     if(b > r or e < l)
//         return 0;   // *** change this with appropiate value
//     if(b >= l and e <= r)
//         return tree[node];

//     ll left = 2 * node, right = 2 * node + 1;
//     ll mid = (b+e)/2;
 
// return combine(query(left,b,mid,l,r),query(right,mid+1,e,l,r));
// }

void update(ll node,ll b,ll e, ll i){
    if(i < b or i > e)
        return;
    if(b == e and b == i){
        if(tree[node].ch == '(')
            tree[node].ch = ')';
        else tree[node].ch = '(';     
        return;
    }

    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b + e)/2;
    update(left,b,mid,i);
    update(right,mid+1,e,i);
    //***change this
    // tree[node] = (tree[left] + tree[right]);
    pull(node);
}

void solve(){
    int n;      cin >> n;
    string s;   cin >> s;

    for(int i = 0; i < s.length(); i++) {
        arr[i + 1] = s[i];
    }

    build(1, 1, n);

    int q; cin >> q;

    while(q--) {
        int x; cin >> x;

        if(x == 0) {
            cout << tree[1].yes << endl;
        } else {
            update(1, 1, n, x);
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