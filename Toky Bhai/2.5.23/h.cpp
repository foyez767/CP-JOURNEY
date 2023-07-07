#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    deque<int> de;
    multiset<int> se;

    int q; cin >> q;

    while(q--) {
        int ty; cin >> ty;

        if(ty == 1) {
            int x; cin >> x;
            de.push_back(x);
        } else if(ty == 2) {
            if(se.empty()) {
                cout << de.front() << "\n";
                de.pop_front();
            } else {
                cout << *(se.begin()) << "\n";
                se.erase((se.begin()));
            }
        } else {
            for(auto d : de) se.insert(d);
            de.clear();
        }
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