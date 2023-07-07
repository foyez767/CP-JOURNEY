#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 4e5+9;
ll arr[N], tree[4*N];
ll n;

void pull(ll node,ll level){
    ll left = 2 * node, right = 2 * node + 1;

    if((n - level) % 2 == 0)
        tree[node] = (tree[left] | tree[right]);
    else tree[node] = (tree[left] ^ tree[right]);

}

void build(ll node,ll b,ll e,ll level){
    if(b == e){
        tree[node] = arr[b];	//***change this
        return;
    }
    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b + e)/2;
    build(left,b,mid, level+1);
    build(right,mid+1,e, level+1);
    
    pull(node,level);
}

void update(ll node,ll b,ll e, ll i,ll x,ll level){
    if(i < b or i > e)
        return;
    if(b == e and b == i){
        tree[node] = x;     // ****Update with appropiate value
        return;
    }

    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b + e)/2;
    update(left,b,mid,i,x,level + 1);
    update(right,mid+1,e,i,x,level + 1);
    //***change this
    pull(node,level);
}

void solve(){
    ll q,p,x;   cin >> n >> q;

    for(ll i = 1; i <= (1 << n); i++)   cin >> arr[i];
    build(1,1,(1 << n),1);

    while(q--){
        cin >> p >> x;
        update(1,1,(1 << n),p,x, 1);
        cout << tree[1] << "\n";
    }
 
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    // cin >> t;
    for(ll i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}