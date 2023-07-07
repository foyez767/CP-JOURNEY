#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e5+9;
int arr[N], tree[4*N];

int combine(int a,int b){
    return (a + b); // *** change this
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
    tree[node] = (tree[left] + tree[right]);
}

int query(int node,int b,int e, int l, int r){
    if(b > r or e < l)
        return 0;   // *** change this with appropiate value
    if(b >= l and e <= r)
        return tree[node];

    int left = 2 * node, right = 2 * node + 1;
    int mid = (b+e)/2;
 
return combine(query(left,b,mid,l,r),query(right,mid+1,e,l,r));
}

void update(int node,int b,int e, int i,int x){
    if(i < b or i > e)
        return;
    if(b == e and b == i){
        tree[node] = tree[node] + x;     // ****Update with appropiate value
        return;
    }

    int left = 2 * node, right = 2 * node + 1;
    int mid = (b + e)/2;
    update(left,b,mid,i,x);
    update(right,mid+1,e,i,x);
    //***change this
    tree[node] = (tree[left] + tree[right]);
}

void solve(){
    memset(arr, 0, sizeof(arr));
    memset(tree, 0, sizeof(tree));

    int n, q; cin >> n >> q;

    for(int i = 1; i <= n; i++) cin >> arr[i];

    build(1, 1, n);

    while(q--){
        int x, l, r; cin >> x ;

        if(x == 1){
            cin >> l;
            int v = query(1, 1, n, l + 1, l + 1);
            cout << v << "\n";
            update(1, 1, n, l + 1, -v);
        }else if(x == 2){
            cin >> l >> r;
            update(1, 1, n,l + 1, r);
        }else{
            cin >> l >> r;
            cout << query(1, 1, n, l + 1, r + 1) << "\n";
        }
    }
 
}
 
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case " << i << ":\n";
        solve();
    }
    
    return 0;
}