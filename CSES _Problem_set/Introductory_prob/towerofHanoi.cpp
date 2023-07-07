#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<pair<int,int>> ans;

void TOH(int n,int A,int B,int C){
    if(n>0){
        TOH(n-1,A,C,B);
        ans.push_back({A,C});
        TOH(n-1,B,A,C);
    }
}

void solve(){
    int n;
    int A = 1,B = 2, C = 3; //tower index
    cin>> n;

    TOH(n,A,B,C);

    cout << ans.size() << "\n";
    
    for(auto v : ans) {
        cout << v.first << " " << v.second << "\n";
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