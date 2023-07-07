#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, x; cin >> n >> x;

    int cnt = 0;

    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            for(int k = j + 1; k <= n; k++){
                if((i + j + k) <= x){
                    cnt++;
                }
            }
        }
    }

    cout << cnt << "\n";

 
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