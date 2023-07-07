#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll query(int s, int f){
    cout << "? " << (f - s + 1) << " ";
    for(int i = s; i <= f; i++){
        cout << i << " ";
    }
    cout << endl;
    int x; cin >> x;
return x;
}

void solve(){
    int n; cin >> n;
    vector<int> pref(n + 1, 0);

    for(int i = 1; i <= n; i++){
        cin >> pref[i];
        pref[i] += pref[i - 1];
    }

    int lo = 1, hi = n, mid = 0, ans = 0;

    while(lo <= hi){
        mid = (lo + hi) / 2;
        ll x = query(lo, mid);
        if(x > pref[mid] - pref[lo - 1]){
            ans = mid;
            hi = mid - 1;
        }else{
            lo = mid + 1;
        }
    }

    cout << "! " << ans << endl;
 
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