#include<bits/stdc++.h>
using namespace std;

const int N = 3e4+9;
int tree[4*N];

int combine(int a,int b){
    return (a + b); // *** change this
}

int query(int node,int b,int e, int l, int r){
    if(b > r or e < l)
        return 0;   // *** change this with appropiate value
    if(b >= l and e <= r)
        return tree[node];

    int left = 2 * node, right = 2 * node + 1;
    int mid = (b + e)/2;
 
return combine(query(left,b,mid,l,r),query(right,mid+1,e,l,r));
}

void update(int node,int b,int e,int i,int x){
    if(i < b or i > e)
        return;
    if(b == e and b == i){
        tree[node] += x;     // ****Update with appropiate value
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
    int n, q, l, r, id;     cin >> n;
    vector<int> vec (n + 1,0);

    for(int i = 1; i <= n; i++) cin >> vec[i];

    cin >> q;

    vector<vector<pair<int,int>>>qury(n+1);

    for (int i = 1; i <= q; i++) {
        cin >> l >> r;
        qury[r].push_back(make_pair( l , i ));
    }

    map <int,int> lastId;
    vector<int>ans(q + 1, 0);

    for (int i = 1; i <= n; i++) {
        update(1, 1, n, i, 1);

        if(lastId.find(vec[i]) != lastId.end())
            update(1, 1, n, lastId[vec[i]], -1);
        
        lastId[vec[i]] = i;

        for(auto x : qury[i]){
            l = x.first, id = x.second, r = i;
            ans[id] = query(1, 1, n, l, r);
        }
    }

    for(int i = 1; i <= q; i++) cout << ans[i] << "\n"; 
 
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