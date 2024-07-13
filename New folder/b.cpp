#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;

    vector<int> vec;
    vec.push_back(0);
    map<int, deque<int>> guess;

    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        vec.push_back(x);
        guess[n - x].push_back(i);
    }

    int number = 1;

    vector<int> ans (n + 1, -1);
    map<int, bool> hat_done;

    for (int i = 1; i <= n; i++) {
        int x = n - vec[i];

        // if (guess[x].size() < x and hat_done[x] == false) {
        //     cout << "Impossible\n";
        //     return;
        // } 

        int k = x;

        while (k > 0 and !guess[x].empty()) {
            ans[guess[x].front()] = number;
            guess[x].pop_front();
            k--;
        }

        number++;
        if (k > 0 and guess[x].empty()) {
            cout << "Impossible\n";
            return;
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