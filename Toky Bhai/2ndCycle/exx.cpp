#include<bits/stdc++.h>
#define int long long
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b) {
    if(a.first == b.first) {
        if(a.second > b.second) 
            return true;
        else return false;
    } else {
        return a.first < b.first;
    }
}

void solve(){


 
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