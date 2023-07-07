#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 4e5 + 7;
int arr[N],tree[4*N],lazy[4*N];

void push(int node, int b, int e){     // *** change this
    if(lazy[node] == 0)
        return;
    tree[node] = tree[node] + lazy[node] * (e - b + 1);

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

    if(b >= l and e <= r)
        return tree[node];
 
    int left = 2 * node, right = 2 * node + 1;
    int mid = (b + e) / 2;
return combine(query(left,b,mid,l,r),query(right,mid+1,e,l,r));
}

void solve(){
    int n, q, l, r;    cin >> n >> q;

  vector<pair<int,int>> seg;
  vector<int> point;

  set<int> se;

  for(int i = 1; i <= n; i++){
      cin >> l >> r;
      seg.push_back(make_pair(l,r));
      se.insert(l); se.insert(r);
  }

  for(int i = 1; i <= q; i++){
      cin >> l;
      point.push_back(l);
      se.insert(l);
  }

    map<int,int> id;

    for(auto m : id){
        cout << m .first << " " << m.second << "\n";
    }
    auto it = se.begin();
    int k = 1;
    while(it != se.end()){
        id[*it] = k++;
        it++;
    }

    for(int i = 0; i < seg.size(); i++){
        l = seg[i].first, r = seg[i].second;
        update(1, 1, n, id[l], id[r], 1);
    }

    for(int i = 0; i < point.size(); i++){
        cout << query(1, 1, n, id[point[i]], id[point[i]]) << "\n";
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