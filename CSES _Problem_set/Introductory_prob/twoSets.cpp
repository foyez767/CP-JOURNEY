#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;

    int tsum = 0, cnt = 0, cnt2 = 0, per = 0;

    if(n % 2 == 0){
        tsum = (n / 2) * (n + 1);
    } else {
        tsum = ((n + 1) / 2) * n;
    }

    if(tsum % 2) {
        cout << "NO\n";
        return;
    }

    int mark[n + 1] {};

    per = tsum / 2;

    for(int i = n; i >= 1; i--){
        if(cnt + i <= per){
            cnt += i;
            mark[i] = 1;
            cnt2++;
        }

        if(cnt == per){
            break;
        }
    }

    cout << "YES\n";
    cout << cnt2 << "\n";
    for(int i = 1; i <= n; i++) {
        if(mark[i]) {
            cout << i << " ";
        }
    }
    cout << "\n";

    cout << n - cnt2 << "\n";
    for(int i = 1; i <= n; i++){
        if(!mark[i]) {
            cout << i << " ";
        }
    }
    cout << "\n";
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