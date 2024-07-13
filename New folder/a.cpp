#include<bits/stdc++.h>
#define int long long
using namespace std;

int Bsearch (int n) {
    int x = 1, l = 1, r = 32;

    while (l <= r) {
        int mid = (l + r) / 2;

        if (pow(2, mid) <= n) {
            x = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
return x;
}

void solve(){
    int n; cin >> n;

    if (n == 1) {
        cout << 1 << "\n";
    } else {
        int x = Bsearch(n / 2);

        cout << (2 * pow(2, x - 1)) << "\n";
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