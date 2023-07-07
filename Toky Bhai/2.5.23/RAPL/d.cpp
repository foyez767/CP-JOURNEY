#include<bits/stdc++.h>
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main(){
    int n, q; 
    while(cin >> n >> q) {
        vector<int> vec(n + 1, 0);

        for(int i = 1; i <= n; i++) cin >> vec[i];

        map<int,int> cnt;
        o_set<int> se;

        for(int i = n; i >= 1; i++) {
            cnt[vec[i]] = 
        }

    }

return 0;
}