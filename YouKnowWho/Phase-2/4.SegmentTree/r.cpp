#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 2e5 + 7;
ll arr[N],tree[4*N],lazy[4*N];

void pull(ll node){
    ll left = 2 * node, right = 2 * node + 1;
    tree[node] = min(tree[left] , tree[right]);    // *** change this
}
 
void build(ll node,ll b,ll e){
    lazy[node] = 0;     // *** change this

    if(b == e){
        tree[node] = arr[b];
        return;
    }

    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b + e) / 2;
    build(left,b,mid);
    build(right,mid+1,e);

    pull(node);
    }

void push(ll node, ll b, ll e){     // *** change this
    if(lazy[node] == 0)
        return;
    tree[node] = tree[node] + lazy[node];

    if(b != e){
        ll left = 2 * node, right = 2 * node + 1;
        lazy[left] = lazy[left] + lazy[node];
        lazy[right] = lazy[right] + lazy[node];
    }
 
    lazy[node] = 0;
}
 
ll combine(ll a, ll b){ // *** change this
    return min(a , b);
}
 
void update(ll node,ll b,ll e,ll l,ll r,ll x){
    push(node,b,e);
 
    if(b > r or e < l)
        return ;
    if(b >= l and e <= r){
        lazy[node] = x;     //***set lazy or value of propagation
        push(node,b,e);
    return;
    }
 
    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b + e) / 2;
    update(left,b,mid,l,r,x);
    update(right,mid+1,e,l,r,x);
 
    pull(node);
}
 
ll query(ll node,ll b,ll e,ll l,ll r){
    push(node,b,e);
    if(b > r or e < l)
        return INT64_MAX;		//***change this
    if(b >= l and e <= r)
        return tree[node];
 
    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b + e) / 2;
return combine(query(left,b,mid,l,r),query(right,mid+1,e,l,r));
}

void solve(){
    ll n,q,l,r,v;  cin >> n;

    for(ll i = 1; i <= n; i++)  cin >> arr[i];

    build(1, 1, n);

    cin >> q;
    cin.ignore();

    while(q--){
        string s,temp;  
        getline(cin,s);
        vector<string> vec;

        for(ll i = 0; i < s.length(); i++){
            if(isspace(s[i])){
                vec.push_back(temp);
                temp.clear();
            }else temp += s[i];
        }
        vec.push_back(temp);

        l = stoll(vec[0]) + 1, r = stoll(vec[1]) + 1;
        
        if(vec.size() == 2){
            if(l > r){
                cout << min(query(1, 1, n, 1, r),query(1, 1, n, l, r)) << "\n";
            }else cout << query(1, 1, n, l, r) << "\n";
        }else{
            v = stoll(vec[2]);
            if(l > r){
                update(1, 1, n, 1, r , v);
                update(1, 1, n, l, n, v);
            }else update(1, 1, n, l, r,v);
        }
    }
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    // cin >> t;
    for(ll i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}