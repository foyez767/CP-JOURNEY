#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin >> s;

    stack<char> st;
    int cnt = 0;

    for(int i = 0; i < s.length(); i++){
        if(st.empty() or st.top() != s[i]){
            st.push(s[i]);
        }
        else{
            cnt++;
            st.pop();
        }
    }

    if(cnt % 2) cout << "Yes\n";
    else cout << "No\n";
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