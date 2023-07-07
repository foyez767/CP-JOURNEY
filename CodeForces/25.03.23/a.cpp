#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; string s, st, cpy,str;   cin >> n >> s;

    int batti = 0, flag = 0;
    st = s, cpy = s,str = s;
    reverse(st.begin(),st.end());

    if(s == st) batti = 1;

    int i = 0, j = n - 1;

    while(j - i >= 0){
        if(s[i] == s[j]){
            i ++, j--;
        }else{
            break;
        }
    }

    int x = i , y = j ;

    for(int k = x; k <= j; k++){
        if(cpy[k] != cpy[y]){
            (cpy[k] == '0') ? cpy[k] = '1' : cpy[k] = '0';
            y--;
            flag = 1;
        }else break;
    }

    string cp2 = cpy;
    reverse(cpy.begin(),cpy.end());
    if(cp2 == cpy) batti = 1;

    i = x ;
    for(int k = j; k >= i; k--){
        if(str[k] != str[i]){
            (str[k] == '0') ? str[k] = '1' : str[k] = '0';
            x++;
            flag = 1;
        }else break;
    }

    string cp1 = str;
    reverse(str.begin(),str.end());

    if(cp1 == str) batti = 1;

    if(batti){
        cout << "YES\n";
    }else cout << "NO\n";

}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}