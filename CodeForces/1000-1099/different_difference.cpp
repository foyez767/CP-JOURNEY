#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;     cin >> k >> n;
    int i = 0,u = 0;
    vector<int> vec;
    while(n > k and n - i > 0 and n - i >= k and k > 0){
        int x = n - i;

        vec.push_back(x);
        n = n - i;
        k--,i++;
        u = x;
    }
    for(int j = k; j >= 1; j--)
        vec.push_back(j);
    
    reverse(vec.begin(),vec.end());

    for(auto v : vec) cout << v << " ";
    cout << "\n";
 
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