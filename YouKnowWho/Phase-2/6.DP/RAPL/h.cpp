#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 2e6 + 7;
ll arr[N], cnt[N];
ll sum = 0;

class query{
    public:
    ll l, r, ans, id, block;
    //operator overloading
    bool operator< (query P) const {
        return make_pair(this->block, this-> r) < make_pair(P.block, P.r);
    }
} q[N];

bool comp(query a, query b){
    return a.id < b.id;
}

void add(ll val){
    sum -= (cnt[val] * cnt[val] * val);
    cnt[val]++;
    sum += (cnt[val] * cnt[val] * val);
}

void remove(ll val){
    sum -= (cnt[val] * cnt[val] * val);
    cnt[val]--;
    sum += (cnt[val] * cnt[val] * val);
}

int32_t main(){
    ll n, m, queries; cin >> n >> queries;    // no of elements

    m = (ll)sqrt(n);    //no of blocks and no of elements in each blocks

//input
    for(ll i = 0; i < n; i++) cin >> arr[i];

//query input
    for(ll i = 0; i < queries; i++){
        cin >> q[i].l >> q[i].r;
        q[i].l--, q[i].r--; // for 0 based indexing, if it is 1 based, then don't need to decrement it
        q[i].id = i, q[i].block = q[i].l / m;
    }
//sorting the quereies
    sort(q, q + queries);
//processing the queries
    ll x = 0, y = 0;
//[x,y) = x inclusive, y is not inclusive
    for(ll i = 0; i < queries; i++){
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

        //removing x // moving right
        while(x < q[i].l){
            remove(arr[x]);
            x++;
        }
        //addding x // moving left
        while(x > q[i].l){
            x--;
            add(arr[x]);
        }

        q[i].ans = sum;
    }

    //now I need to go back to my initial query order
    sort(q, q + queries, comp);
    
    //printing answer
    for(ll i = 0; i < queries; i++){
        cout << q[i].ans << "\n";
    }

return 0;
}