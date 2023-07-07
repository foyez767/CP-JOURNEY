#include<bits/stdc++.h>
#define ll long long
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
 
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
    int n; cin >> n;

    vector<ll> vec (n, 0);

    for(auto &x : vec) cin >> x;

    ll total = 0, x = 0;

    map<int,int> mp;
    o_set<pair<ll,ll>> se;

    for(int i = 0; i < n; i++){
        mp[vec[i]]++;
    }

    for(int i = 0; i < vec.size(); i++){
        x = vec[i];

        if(x == 0 and se.empty()){
            continue;
        }else if(x == 0 and !se.empty()){
            ll y = se.size() - 1;
            
            pair<ll,ll> p = *(se.find_by_order(y));
            total += p.first;
            se.erase(p);
        }
        
        se.insert(make_pair(vec[i], i));
    }
 
    cout << total << "\n";
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}