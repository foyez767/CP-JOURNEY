#include<bits/stdc++.h>
#define ll long long
#define f first
#define s second
using namespace std;

const ll N = 4e5+9;
ll arr[N];

class Node{
    public:
        pair<int,int>lmx,rmx,maxi;
};
Node tree[4*N];


ll combine(ll a,ll b){
    return (a + b); // *** change this
}

void pull(int node){
    int left = 2 * node , right = 2 * node + 1;

    pair<int,int>lp1,rp1,lp2,rp2,maxi,lp,rp;

    lp1 = tree[left].lmx, lp2 = tree[right].lmx;
    rp1 = tree[left].rmx, rp2 = tree[right].rmx;

    if(lp1.s == lp2.s and lp1.s == rp1.s)
        lp = { lp1.f + lp2.f, lp1.s};
    else
        lp = lp1;

    if(rp1.s == rp2.s and rp1.s == lp2.s)
        rp = { rp1.f + rp2.f, rp1.s};
    else 
        rp = rp2;


    tree[node].lmx = lp;
    tree[node].rmx = rp;
    tree[node].maxi = max(tree[left].maxi,tree[right].maxi);

    if(tree[left].rmx.s == tree[right].lmx.s)
        tree[node].maxi = max ({tree[node].maxi,{tree[left].rmx.f + tree[right].lmx.f,tree[left].rmx.s},tree[node].lmx,tree[node].rmx});
        
}

void build(ll node,ll b,ll e){
    if(b == e){
        tree[node].lmx = {1,arr[b]};
        tree[node].rmx = {1,arr[b]};
        tree[node].maxi = {1,arr[b]};
        return;
    }
    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b + e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    //***change this
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



void solve(){
    int n, c, q, l, r;    cin >> n >> c >> q;
    
    for(int i = 1; i <= n; i++)     cin >> arr[i];

    build(1, 1, n);

    for(int i = 1; i <= 25; i++){
        pair<int,int>lp,rp,ma;
        lp = tree[i].lmx;
        rp = tree[i].rmx;
        ma = tree[i].maxi;
        cout <<"Node : " << i << "\n";
        cout << lp.first << " : " << lp.second << endl;
        cout << rp.first << " : " << rp.second << endl;
        cout << ma.first << " : " << ma.second << endl;
        cout << endl;
    }
 
}
 
int main(){
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