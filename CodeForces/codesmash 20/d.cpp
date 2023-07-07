#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, sc; cin  >> n >> sc;

    map<string,int> mps;
    for(int i = 1; i <= n; i++){
        string s; cin >> s;
        mps[s] = 1;
    }
    map<string,int> mp;

    for(int i = 1; i <= sc; i++){
        int k ; cin >>k;
        for(int j = 1; j <= k; j++){
            string s; cin >> s;
            mp[s]++;
        }
        
    }

    vector<pair<int,string>> vec;

    for(auto m : mp){
        if(mps[m.first] == 1)
            vec.push_back({m.second, m.first});
    }

    sort(vec.rbegin(), vec.rend());

    int ans = 0;
    vector<string> vec2;
    for(int i = 0; i < vec.size(); i++){
        if(vec[i].first > 1){
            ans++;
            vec2.push_back(vec[i].second);
        }
    }


    sort(vec2.begin(), vec2.end());

    cout << ans <<endl;
    for(auto v : vec2){
        cout << v << "\n";
    }

 
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