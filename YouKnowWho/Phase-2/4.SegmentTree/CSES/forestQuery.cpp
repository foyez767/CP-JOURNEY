#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 1e6+9, M = 1001;
ll arr[N], tree[4*N];

ll combine(ll a,ll b){
    return (a + b); // *** change this
}

ll query(ll node,ll b,ll e, ll l, ll r){
    if(b > r or e < l)
        return 0;   // *** change this with appropiate value
    if(b >= l and e <= r)
        return tree[node];

    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b+e)/2;
 
return combine(query(left,b,mid,l,r),query(right,mid+1,e,l,r));
}

void update(ll node,ll b,ll e, ll i,ll x){
    if(i < b or i > e)
        return;
    if(b == e and b == i){
        tree[node] = x;     // ****Update with appropiate value
        return;
    }

    ll left = 2 * node, right = 2 * node + 1;
    ll mid = (b + e)/2;
    update(left,b,mid,i,x);
    update(right,mid+1,e,i,x);
    //***change this
    tree[node] = (tree[left] + tree[right]);
}

char grid[M][M];

void solve(){
    int n, q; cin >> n >> q;

    map<pair<int,int>, int>id;
    vector<pair<int,int>> trie;

    int k = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> grid[i][j];
            id[{i,j}] = k++;
            if(grid[i][j] == '*'){
                trie.push_back({i, j});
            }
        }
    }

    for(auto v : trie){
        int l = v.first, r = v.second;
        int k = id[{l,r}];
        update(1, 1, N, k, 1);
    }

    // for(auto v : id){
    //     cout << v.first << " " << v.second << endl;
    // }
    // for(int i = 1; i <= 50; i++) cout << tree[i] << " ";
    while(q--){
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

        int l = id[{x1, y1}], r = id[{x2, y2}];
        cout << query(1, 1, N, l, r) << "\n";
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