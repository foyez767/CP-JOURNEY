#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;

    for(int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
 
    if(s[0] != 'm' or s[n-1]!= 'w'){
        cout << "NO\n";
        return;
    }

    int batti = 0;
    for(int i = 0; i < n-1; i++){
        char ch = s[i], chh = s[i + 1];

        if(ch == chh){
            continue;
        }else if((ch == 'm' and chh == 'e') or (ch == 'e' and chh == 'o') or (ch == 'o' and chh == 'w') or (ch == 'w' and chh == 'm'))
            continue;
        else{
            batti = 1;
            break;
        }
    }

     if(batti){
         cout << "NO\n";
    }else{
        cout << "YES\n";
    }
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