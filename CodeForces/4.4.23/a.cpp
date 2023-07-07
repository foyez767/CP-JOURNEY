#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, d; cin >> n >> d;

    string s; cin >> s;
    if(d == 0){
        cout << s; cout << d;
        cout << endl;
        return;
    }

    int id = 0;
    for(int i = 0; i < n; i++){
        int x = s[i] - '0';
        if(d > x){
            id = i;
            break;
        }
    }

    int i = 0;
    for(; i < n; i++){
        int x = s[i] - '0';

        if(i == id){
            cout <<  d;
            break;
        } else {
            cout << s[i];
        }
    }

    for(; i < n; i++){
        cout << s[i] ;
    }
    cout << endl;

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