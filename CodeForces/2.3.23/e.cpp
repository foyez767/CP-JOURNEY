#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; string s;
    cin >> n >> s;

    int cnt = 0;
    for(int i = 0; i < n - 2; i++){
        if(s[i] == s[i + 2])
            cnt++;
    }
 
    cout << n - cnt - 1 << "\n";
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