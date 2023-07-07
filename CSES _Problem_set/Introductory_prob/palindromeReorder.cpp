#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin >> s;
    int n = s.length();

    map<char,int> mp;

    for(int i = 0; i < s.length(); i++) {
        mp[s[i]]++;
    }

    int uni = n % 2, odd = 0;
    char mid;

    for(auto m : mp){
        if(m.second % 2){
            odd++;
            mid = m.first;
            m.second--;
        }
    }
//if length is odd, then single character can be 1, length is even then every character must be appear for atleast 2 times
    if((uni == 1 and odd > 1) or (uni == 0 and odd >= 1)){
        cout << "NO SOLUTION\n";
        return;
    }
 
    string st = "", str = "";
    for(auto m : mp){
        for(int i = 1; i <= m.second / 2; i++){
            str += m.first;
            st += m.first;
        }
        mp[m.first] -= m.second / 2;
    }

    reverse(st.begin(), st.end());
    
    string man = "";

    man += str;
    if(n % 2)
        man += mid;
    man += st;
    cout << man << "\n";

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