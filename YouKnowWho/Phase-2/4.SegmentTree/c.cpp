#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std; 
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


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
            vec[v] = revidx[x][k];
            k++;
        }
    }

    long long ans = 0;
    o_set<int> se;

    for(int i = n; i >= 1; i--){
        ans += se.order_of_key(vec[i]);
        se.insert(vec[i]);
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