#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n; 
    vector<int> vec(n, 0);
    for(auto &x : vec) cin >> x;

    int sum = 0, sum2 = 0;
    for(int i = 0; i < n; i++){
        if(vec[i] % 2 == 0){
            sum += vec[i];
        }else sum2 += vec[i];
    }

    if(sum > sum2){
        cout << "YES\n";
    }else cout << "NO\n";


 
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