#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> vec(n, 0), dupli(n, 0);

    for(int i = 0; i < n; i++) {
        cin >> vec[i];
        dupli[i] = vec[i];
    }

    sort(dupli.begin(), dupli.end());

    int mx = *(max_element(vec.begin(), vec.end()));

    for(int i = 0; i < n; i++) {
        if(vec[i] != mx)
            cout << (vec[i] - mx) << " ";
        else cout << (vec[i] - dupli[n - 2]) << " ";
    }
    cout << "\n";
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