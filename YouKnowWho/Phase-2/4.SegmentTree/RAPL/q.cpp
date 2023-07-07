#include<bits/stdc++.h>
#define ll long long
#define inf 1e6
using namespace std;

const int N = 5e5 + 9;
ll arr[N], tree[4*N];

ll combine(ll a,ll b){
    return max(max(a, b), a + b); // *** change this
}

void build(int node,int b,int e){
    if(b == e){
        tree[node] = arr[b];	//***change this
        return;
    }
    int left = 2 * node, right = 2 * node + 1;
    int mid = (b + e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    //***change this
    tree[node] = max(tree[left] + tree[right],max(tree[left],tree[right]));
}

ll query(int node,int b,int e, int l, int r){
    if(b > r or e < l)
        return -inf;   // *** change this with appropiate value
    if(b >= l and e <= r)
        return tree[node];

    int left = 2 * node, right = 2 * node + 1;
    int mid = (b+e)/2;
 
return combine(query(left,b,mid,l,r),query(right,mid+1,e,l,r));
}

void solve(){
    int n, q; cin >> n ;

    for(int i = 1; i <= n;  i++){
        cin >> arr[i];
    }

    build(1, 1, n);

    cin >> q;

    while(q--){
        int l , r; cin >> l >> r;
        printf("%lld\n",query(1, 1, n, l, r));
    }

 
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}