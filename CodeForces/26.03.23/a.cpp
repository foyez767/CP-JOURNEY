#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
    int n; cin >> n;
    vector<int> arr(n + 1, 0), brr(n + 1, 0), arr2(n + 1, 0), brr2(n + 1, 0);
 
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    for(int i = 1; i <= n; i++) {
        cin >> brr[i];
    }
    
    for(int i = 1; i <= n; i++){
        arr2[i] = min(arr[i], brr[i]);
        brr2[i] = max(arr[i], brr[i]);
    }
 
    int maxA = *(max_element(arr2.begin(), arr2.end()));
    int maxB = *(max_element(brr2.begin(), brr2.end()));

    if(maxA == arr2[n] and maxB == brr2[n]){
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