#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+9;
int arr[N], tree[4*N];

int combine(int a,int b){
    return (a + b); // *** change this
}

void build(int node,int b,int e){
    if(b == e){
        tree[node] = 0;	//***change this
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
    int n;      cin >> n;
    string s,rev;   cin >> s;
    rev = s;
 
    reverse(rev.begin(),rev.end());
 
    map<int,vector<int>> index,revidx;
    // for all characters , all posible index in the original string
    for(int i = 0; i < s.length(); i++){
        index[s[i] - 'a' + 1].push_back(i + 1);
    }
    // for all characters, all possible index after reversing the string
    for(int i = 0; i < rev.length(); i++){
        revidx[rev[i] - 'a' + 1].push_back(i + 1);
    }
 
    vector<int> vec (n + 1, 0);
 
    for(auto m : index){
        int k = 0,x = m.first;
        for(auto v : m.second){
            arr[v] = revidx[x][k];
            k++;
        }
    }
    build(1, 1, n);
 
    long long ans = 0;
 
    for(int i = 1; i <= n ; i++){
        ans += query(1, 1, n, arr[i] + 1, n);
        update(1, 1, n, arr[i], 1);
    }
    cout << ans << "\n";
 
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