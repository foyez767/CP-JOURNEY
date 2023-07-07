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

    map<int, vector<string>> res;

    for(auto m : mp){
        if(mps[m.first] == 1)
            res[m.second].push_back(m.first);
    }

    int ans = 0,maxi = 0;
    for(auto v : res){
        if(v.second.size() > ans){
            maxi = v.second.size();
            ans = v.first;
        }
    }


    if(maxi ==  1){
        cout << maxi << "\n";
        for(auto v : mps){
            cout << v.first << endl;
        }
        return;
    }

    cout << maxi << endl;
    for(auto v : res[ans]){
        cout << v << endl;
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