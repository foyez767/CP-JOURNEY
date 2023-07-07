#include<bits/stdc++.h>
#define ll long long
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n,x,ans = 0;         cin >> n;
    vector<ll>vec(n,0);

    for(auto &x : vec)    cin >> x;

    o_set<ll> se,s;
    map<ll,ll> mp;

    for(ll i = n - 1; i >= 0; i--){
        x = se.order_of_key(vec[i]);
        mp[vec[i]] = x;
        se.insert(vec[i]);
    }

    for(ll i = 0; i < n; i++){
        x = s.order_of_key(vec[i]);
        ans += (mp[vec[i]] * (i - x));
        s.insert(vec[i]);
    }
    cout << ans << "\n";

  return 0;
}