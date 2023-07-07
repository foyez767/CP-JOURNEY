#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin >> s;

    int n = s.length(), cnt = 0;

    // vector<string> vec;
    set<string> se;


    for(int len = 2; len <= n; len++){
        for(int j = 0; j + len <= n; j++){
            se.insert(s.substr(j, len));
        }
    }

    set<string> ans;

    auto it = se.begin();

    while(it != se.end()){
        string st = *it;
        string str = st;
        reverse(str.begin(), str.end());

        if(st == str){
            ans.insert(st);
        }
        it++;
    }

    for(auto a : ans) cout << a << "\n";
    cout << "\n";
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