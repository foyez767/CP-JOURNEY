#include<bits/stdc++.h>
#define ll long long
#define inf 1e8
using namespace std;

const int N = 1e6 + 7;
ll step[N];

ll count(ll n){
    if(n == 0) return 0;
    if(step[n] != -1){
        return step[n];
    }

    ll x = n, ans = inf;

    set<ll> se;
    while(x){
        se.insert(n - x % 10);
        x /= 10;
    }

    auto it = se.begin();
    while(it != se.end()){
        if(*it == n){
            it++;
            continue;
        }
        ans = min(ans, count(*it) + 1);
        it++;
    }
    se.clear();

    step[n] = ans;
return step[n];
}
void solve(){
    memset(step, -1 , sizeof(step));
    ll n; cin >> n;

    cout << count(n) << "\n";
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}