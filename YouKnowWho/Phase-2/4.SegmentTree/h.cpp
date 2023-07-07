#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
int arr[N],tree[4*N],lazy[4*N];

void push(int node, int b, int e){     // *** change this
    if(lazy[node] == 0)
        return;
    tree[node] = tree[node] + lazy[node] ;

    if(b != e){
        int left = 2 * node, right = 2 * node + 1;
        lazy[left] = lazy[left] + lazy[node];
        lazy[right] = lazy[right] + lazy[node];
    }
 
    lazy[node] = 0;
}
 
int combine(int a, int b){ // *** change this
    return (a + b);
}
 
void update(int node,int b,int e,int l,int r,int x){
    push(node,b,e);
 
    if(b > r or e < l)
        return ;
    if(b >= l and e <= r){
        lazy[node] += x;     //***set lazy or value of propagation
        push(node,b,e);
    return;
    }
 
    int left = 2 * node, right = 2 * node + 1;
    int mid = (b + e) / 2;
    update(left,b,mid,l,r,x);
    update(right,mid+1,e,l,r,x);

}
 
int query(int node,int b,int e,int l,int r){

    push(node,b,e);

    if(b > r or e < l)
        return 0;		//***change this

    if(b >= l and e <= r){
        if(tree[node] % 3 == 0)
            return (e - b + 1);
    return 0;
    }
 
    int left = 2 * node, right = 2 * node + 1;
    int mid = (b + e) / 2;
return combine(query(left,b,mid,l,r),query(right,mid+1,e,l,r));
}

void solve(){
    int n,q,l,r,x;     cin >> n >> q;

    while(q--){
        cin >> x >> l >> r;
        if(x == 0)
            update(1, 1, n, l + 1, r + 1, 1);
        else cout << query(1, 1, n, l + 1, r + 1 ) << "\n";
    }
}
 
int  main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case " << i << ": \n";
        solve();
    }
    
    return 0;
}