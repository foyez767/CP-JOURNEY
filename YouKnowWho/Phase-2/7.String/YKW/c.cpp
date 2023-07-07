#include<bits/stdc++.h>
#define ll long long
using namespace std;

char giveMeValid(char ch2, char ch3){
    for(char i = 'a'; i <= 'z'; i++){
        if(i != ch2 and i != ch3){
            return i;
        }
    }
return '0';
}

void solve(){
    string s; cin >> s;

    stack<char> st;
    int n = s.length();

    for(int i = 0; i < n; i++) {
        if(st.empty() or st.top() != s[i]) {
            st.push(s[i]);
        }
        else {
            char ch = giveMeValid(s[i - 1], s[i + 1]);
                
            st.push(ch);
            s[i] = ch;
        }
    }

    cout << s << "\n";
 
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
//foyez