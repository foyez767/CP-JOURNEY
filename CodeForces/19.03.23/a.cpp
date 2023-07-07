#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll a, b, c; cin >> a >> b >> c;

    if(a + b == c){
        cout << "+\n";
    }else cout << "-\n";
 
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