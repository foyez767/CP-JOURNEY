#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 2e5 + 9, inf = 1e9, M = 2e5 + 9;
ll tree[4 * M];

int query(int node,int b,int e, int l, int r){
    if(b > r or e < l)
        return -inf;   // *** change this with appropiate value
    if(b >= l and e <= r)
        return tree[node];

    int left = 2 * node, right = 2 * node + 1;
    int mid = (b+e)/2;
 
return max(query(left,b,mid,l,r),query(right,mid+1,e,l,r));
}

void update(int node,int b,int e, int i,ll x){
    if(i < b or i > e)
        return;
    if(b == e and b == i){
        tree[node] = max(x, tree[node]);     // ****Update with appropiate value
        return;
    }

    int left = 2 * node, right = 2 * node + 1;
    int mid = (b + e)/2;
    update(left,b,mid,i,x);
    update(right,mid+1,e,i,x);
    //***change this
    tree[node] = max(tree[left] , tree[right]);
}

ll dp[N];

int main(){
    int n ; cin >> n;

    vector<ll> arr(n + 1, 0), arr2(n + 1, 0);
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        arr2[i] = arr[i];
    }

    sort(arr2.begin(), arr2.end());

    map<ll,ll> id;

    for(int i = 1; i <= n; i++){
        id[arr2[i]] = i ;
    }

    for(int i = 1; i <= n; i++){
        arr[i] = id[arr[i]];    // now all Ai are in between 1 to n
    }

    for(int i = 1; i <= n; i++){
        dp[i] = 1;

        if(arr[i] != 1) {
            ll mx = query(1, 1, M, 1, arr[i] - 1) + 1; //if ith item is taken, strictly less then arr[i]
            dp[i] = max(mx, dp[i]);
        }
        update(1, 1, M, arr[i], dp[i]);
    }
    
    ll ans = 0;
    for(int i = 1; i <= n; i++){
        ans = max(ans, dp[i]);
    }

    cout << ans << "\n";
    
return 0;
}