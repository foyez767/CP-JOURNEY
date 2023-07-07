#include<bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
    int m; cin >>  m;

    map<int,int> mp;
    map<int, vector<int>> vec;

    for(int i = 1; i <= m; i++){
        int n; cin >> n;

        for(int j = 1; j <= n; j++){
            int u; cin >> u;
            mp[u]++;
            vec[i].push_back(u);
        }
    }

    vector<int> ans;

    for(auto v : vec){
        bool taken = false;
        for(auto m : v.second){
            if(mp[m] > 1){
                mp[m]--;
            }else if (mp[m] == 1 and taken == false){
                    ans.push_back(m);
                    taken = true;
                    mp[m]--;
            }
        }
    }

    if(ans.size() == m){
        for(auto a : ans) cout << a << " "; cout << "\n";
    }else cout << -1 << "\n";

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