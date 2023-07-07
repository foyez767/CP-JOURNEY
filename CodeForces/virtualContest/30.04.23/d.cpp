#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;

    int mnL = n + 1, mxR = -1;
    map<int,int> mp;

    for(int i = 1; i <= n; i++) {
        int l, r, c; cin >> l >> r >> c;
        if(i == 1) {
            mnL = l, mxR = r;
            mp[mnL] = c, mp[mxR] = c;
            cout << c << "\n";
            continue;
        }

        mnL = min(mnL, l), mxR = max(mxR, r);

        if(mnL == l and mxR == r) {
            int  x = mp[mnL], y = mp[mxR];
            if(x >= 1 and y >= 1) {
                if(mnL != mxR) {
                    cout << min(c,x + y) << "\n";
                    mp[mnL] = -1, mp[mxR] = min(c, mp[mxR]);
                }
                else {
                    cout << min(c, y) << "\n";
                    mp[mnL] = min(mnL, c);
                }
                continue;
            } else if(x == -1 and y >= 1) {
                cout << min(c, y) << "\n";
                mp[mxR] = min(c, mp[mxR]);
                continue;
            }
            cout << c << "\n";
            mp[mnL] = -1, mp[mxR] = c;
        } 
        else {
            // cout << mnL << " : " << mp[mnL] << endl;
            // cout << mxR << ": " << mp[mxR] << endl;

            if(mnL == l) {
                bool batti = false;
                if(mp[mnL] == -1) batti = true;

                (mp[mnL] == 0) ? mp[mnL] = c : mp[mnL] = min(mp[mnL], c);

                if(batti) mp[mnL] = -1;

            } else if(mnL != l and mp[mnL] == 0) {
                mp[mnL] = c;
            } 

            if(mxR == r) {
                (mp[mxR] == 0) ? mp[mxR] = c : mp[mxR] = min(mp[mxR], c);
            } else if(mxR != r and mp[mxR] == 0) {
                mp[mxR] = c;
            } 

            // if(l == r and l == mnL and r == m) {
            //     mp[mnL] = mp[mxR] = min(min(mp[mnL], mp[mxR]), c);
            // }

            // cout << mnL << " : " << mp[mnL] << endl;
            // cout << mxR << ": " << mp[mxR] << endl;

            if(mp[mnL] == -1) cout << mp[mxR] << "\n";
            else if(mp[mxR] == -1) cout << mp[mnL] << "\n";
            else cout << mp[mnL] + mp[mxR] << "\n";

        }
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