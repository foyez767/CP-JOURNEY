#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin >> s;

    string st = s;
    reverse(st.begin(), st.end());
    int n = s.length();
//if given string is not a palindrome, then the string is already good
    if(s != st){
        cout << s << "\n";
        return;
    }

    map<char,int> mp;

    for(int i = 0; i < s.length(); i++){
        mp[s[i]]++;
    }

    int uni = 0;
    for(auto m : mp){
        if(m.second == 1){
            uni++;
        }
    }
//if it has only 1type of characters, means it is not good, we can't rearrange it 
//if given string is a palindrome and it has more than 1 type o characters, and length is odd(middle element is the single one), 
//then we can rearrange it such that the string becomes good by simply putting middle element in last
//if length is even and has more than 1 types of char , means every char is available for 2,4,.. even times
//so we can simply print each char no of times they are available
    if(mp.size() == 1){
        cout << "-1\n";
    }
    else if(n % 2 == 1 and uni == 1){
        char lastC = s[n / 2];
        for(int i = 0; i < n; i++){
            if(i == n/2) continue;
            cout << s[i];
        }
        cout << lastC << "\n";
    }
    else {
        sort(s.begin(), s.end());
        cout << s << "\n";
    }
    
}
 
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}