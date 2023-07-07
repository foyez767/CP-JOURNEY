#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll a, b, n, m;  cin >> a >> b >> n >> m;

    ll ans1 = n * a, ans2 = n * b,ans3 = INT64_MAX, ans4 = INT64_MAX;
    vector<ll> ans;
    ans.push_back(n * a);
    ans.push_back(n * b);
    ll k = n / (m + 1);

    if(n % (m + 1) == 0){
        ans.push_back(m * k * a);
    }else{
        ans.push_back((n % (m + 1) * b + k * a * m));
    }
 
    cout << *(min_element(ans.begin(),ans.end())) << "\n";
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}