#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 1e5 + 7;
vector<ll> grp[N],clr(N,0);
bool vis[N];

void dfs(ll u){
    vis[u] = true;
    
    for(auto v : grp[u]){
        if(!vis[v]){
            clr[v] = !clr[u];
            dfs(v);
        }
    }
}

void solve(){
    ll n;  cin >> n;

    for(ll i = 1; i < n; i++){
        ll u, v; cin >> u >> v;
        grp[u].push_back(v);
        grp[v].push_back(u);
    }

    dfs(1);

    ll r = 0, b = 0;

    for(ll i = 1; i <= n; i++){
        if(clr[i] == 0){
            r++;
        }else{
            b++;
        }
    }

    long long ans = r * b;
    cout << ans - (n - 1) << "\n";
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    // cin >> t;
    for(ll i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}