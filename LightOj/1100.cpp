#include<bits/stdc++.h>
#define inf 1000000
using namespace std;

const int N = 2e5+9;
int arr[N];
pair<int,int> tree[4*N];

pair<int,int> combine(pair<int,int> p1, pair<int,int> p2){
    vector<int> vec;
    if(p1.first != inf)
        vec.push_back(p1.first);
    if(p1.second != inf)
        vec.push_back(p1.second);
    if(p2.first != inf)
        vec.push_back(p2.first);
    if(p2.second != inf)
        vec.push_back(p2.second);

    sort(vec.begin(),vec.end());

    int a = inf, b = inf,mini = inf;

    for(int i = 0; i < vec.size() - 1; i++){
        if((int)abs(vec[i] - vec[i+1]) < mini){
            mini = (int)abs(vec[i]  - vec[i + 1]);
            a = vec[i];
            b = vec[i + 1];
        }
    }

    if(vec.size() == 1){
        a = vec[0];
        b = inf;
    }

    vec.clear();

return make_pair(a,b);
}

void pull(int node){
    int left = 2 * node, right = 2 * node + 1;
    pair<int,int> p1 = tree[left], p2 = tree[right];

    vector<int> vec;
    if(p1.first != inf)
        vec.push_back(p1.first);
    if(p1.second != inf)
        vec.push_back(p1.second);
    if(p2.first != inf)
        vec.push_back(p2.first);
    if(p2.second != inf)
        vec.push_back(p2.second);

    sort(vec.begin(),vec.end());

    int a = inf, b = inf,mini = inf;

    for(int i = 0; i < vec.size() - 1; i++){
        if((int)abs(vec[i] - vec[i+1]) < mini){
            mini = (int)abs(vec[i] - vec[i + 1]);
            a = vec[i];
            b = vec[i + 1];
        }
    }

    if(vec.size() == 1){
        a = vec[0], b = inf;
    }

    vec.clear();

    tree[node] = make_pair(a,b);
}

void build(int node,int b,int e){
    if(b == e){
        tree[node] = make_pair(arr[b],inf);	//***change this
        return;
    }
    int left = 2 * node, right = 2 * node + 1;
    int mid = (b + e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    //***change this
    pull(node);
}

pair<int,int> query(int node,int b,int e, int l, int r){
    if(b > r or e < l)
        return make_pair(inf,inf);   // *** change this with appropiate value
    if(b >= l and e <= r)
        return tree[node];

    int left = 2 * node, right = 2 * node + 1;
    int mid = (b+e)/2;
 
return combine(query(left,b,mid,l,r),query(right,mid+1,e,l,r));
}


void solve(){
    int n, q, l, r;   cin >> n >> q;

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    build(1, 1, n);

    while(q--){
        cin >> l >> r;

        pair<int,int> p = query(1, 1, n, l + 1 , r + 1);
        cout << (int)abs(p.first - p.second) << "\n";
    }

    memset(arr, 0, sizeof(arr));
    memset(tree, 0,sizeof(tree));
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