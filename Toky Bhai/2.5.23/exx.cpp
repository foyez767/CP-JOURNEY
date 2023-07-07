#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e5 + 7,mx = 2e5 + 7;
int arr[N],  mx_oc = 0, track[mx], cnt[mx];

class query{
    public:
    int l, r, id, block, k;
    bool ans;
    query() {
        l = 0, r = 0, id = 0, block = 0, k = 0;
        ans = false;
    }
    //operator overloading
    bool operator< (query P) const {
        return make_pair(this->block, this-> r) < make_pair(P.block, P.r);
    }
} q[N];

bool comp(query a, query b){
    return a.id < b.id;
}

void add(int val){
    cnt[val]++;
    track[cnt[val]]++;
    mx_oc = max(mx_oc, cnt[val]);  //****
}

void remove(int val){
    track[cnt[val]]--;
    if(track[cnt[val]] == 0) mx_oc--;
    cnt[val]--;
}

void solve(){
    int n, m, queries; cin >> n >> queries;    // no of elements

    m = sqrt(n);    //no of blocks and no of elements in each blocks

//input
    map<int,int> id;
    int k = 1;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(!id[arr[i]]) {
            id[arr[i]] = k++;
        }
        arr[i] = id[arr[i]];
    }

//query input
    for(int i = 0; i < queries; i++){
        cin >> q[i].l >> q[i].r >> q[i].k;
        q[i].l--, q[i].r--; // for 0 based indexing, if it is 1 based, then don't need to decrement it
        q[i].id = i, q[i].block = q[i].l / m;
    }

//sorting the quereies
    sort(q, q + queries);
//processing the queries
    int x = 0, y = 0;
//[x,y) = x inclusive, y is not inclusive
    for(int i = 0; i < queries; i++){
        //adding y//moving right
        while(y <= q[i].r){
            add(arr[y]);
            y++;
        }
        //removing y// moving left
        while(y > q[i].r + 1){
            y--;
            remove(arr[y]);
        }
        //removing d // moving right
        while(x < q[i].l){
            remove(arr[x]);
            x++;
        }
        //addding x // moving left
        while(x > q[i].l){
            x--;
            add(arr[x]);
        }

        q[i].ans = (mx_oc * q[i].k >= (q[i].r - q[i].l + 1));
    }

    //now I need to go back to my initial query order
    sort(q, q + queries, comp);
    
    //printing answer
    for(int i = 0; i < queries; i++){
        (q[i].ans) ? cout << "YES\n" : cout << "NO\n";
    }
    
}
 
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}