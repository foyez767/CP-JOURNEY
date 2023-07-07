#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n , gc = 0;  cin >> n;
    ll arr [n+1] {};
    for(ll i = 1; i <= n; i++) cin >> arr[i];

    // for(ll i = 1; i <=n; i++){
    //     for(ll j = i; j >= i; j--){
    //         if(arr[j] % (i+1) != 0)
    //             arr[j] = 0;
    //     }
    // }

    // for(ll i = 0; i <= n; i++) cout<< arr[i] << " ";

    for(ll i = 1; i <= n; i++)
        gc = __gcd(arr[i], i+1);
    
    if(gc == 1) cout << "YES\n";
    else cout << "NO\n";
 
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    for(ll i = 1; i<=t; i++){
        solve();
    }
    
    return 0;
}