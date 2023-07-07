#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
int arr[N],tree[4*N],lazy[4*N];

void pull(int node){
    int left = 2 * node, right = 2 * node + 1;
    tree[node] = (tree[left] + tree[right]);    // *** change this
}
 
void build(int node,int b,int e){
    lazy[node] = 0;     // *** change this
    if(b == e){
        tree[node] = arr[b];
        return;
    }

    int left = 2 * node, right = 2 * node + 1;
    int mid = (b + e) / 2;
    build(left,b,mid);
    build(right,mid+1,e);

    // pull(node);
    }

void push(int node, int b, int e){     // *** change this
    if(lazy[node] == 0)
        return;
    if(b != e)
        tree[node] = tree[node] ;
    else{
        if(lazy[node] % 2 == 1 and tree[node] == 0)
            tree[node] = 1;
        else if(lazy[node] % 2 == 1 and tree[node] == 1)
            tree[node] = 0;
    }

    if(b != e){
        int left = 2 * node, right = 2 * node + 1;
        lazy[left] = lazy[left] + lazy[node];
        lazy[right] = lazy[right] + lazy[node];
    }
 
    lazy[node] = 0;
}
 
int combine(int a, int b){ // *** change this
    return (a+b);
}
 
void update(int node,int b,int e,int l,int r,int x){
    push(node,b,e);
 
    if(b > r or e < l)
        return ;
    if(b >= l and e <= r){
        lazy[node] = x;     //***set lazy or value of propagation
        push(node,b,e);
    return;
    }
 
    int left = 2 * node, right = 2 * node + 1;
    int mid = (b + e) / 2;
    update(left,b,mid,l,r,x);
    update(right,mid+1,e,l,r,x);
 
    // pull(node);
}
 
int query(int node,int b,int e,int l,int r){
    push(node,b,e);
    if(b > r or e < l)
        return 0;		//***change this
    if(b >= l and e <= r)
        return tree[node];
 
    int left = 2 * node, right = 2 * node + 1;
    int mid = (b + e) / 2;
return combine(query(left,b,mid,l,r),query(right,mid+1,e,l,r));
}

void solve(){
    string s;   int q,l,r;  cin >> s >> q;
    for(int i = 0; i < s.length(); i++){
        arr[i+1] = s[i] - '0';
    }

    int n = s.length();
    build(1 , 1 , n);
   
    char ch;
    while(q--){
        cin >> ch ;
        if(ch == 'I'){
            cin >> l >> r;
            update(1, 1, n, l, r, 1);
        }else{
            cin >> l;
            cout << query(1, 1, n, l , l) << "\n";
        }

    }
 
}
 
int main(){
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