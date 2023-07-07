#include<bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
    string a, b; cin >> a >> b;
    int lcp = 0, lcs = 0;

    for(int i = 0; i < b.length(); i++) {
        if(a[i] == b[i]) {
            lcp++;
        } else {
            break;
        }
    }

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

     for(int i = 0; i < b.length(); i++) {
        if(a[i] == b[i]) {
            lcs++;
        } else {
            break;
        }
    }

    int n = a.length();

    if(lcp + 1 < n - lcs) {
        cout << 0 << "\n";
        return;
    }

    cout << min(lcp + 1, n) - max(n - lcs, 1) + 1 << "\n";

    for(int i = max(n - lcs, 1); i <= min(lcp + 1, n); i++) {
        cout << i << " ";
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