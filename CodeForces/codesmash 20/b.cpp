#include<bits/stdc++.h>
#define no "No"
#define yes "Yes"
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;

    for(int i = 1; i <= 11; i++){
        int p, x; cin >> p >> x;
        if(p == 0 or p == 10){
            cout << no << "\n";
            continue;
        }
        int r = (x / p);
        if(r >= n){
            cout << no << "\n";
        }else cout << yes << "\n";
    }
 
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}