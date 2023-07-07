#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n,c,cnt= 0,cost = 0,left = 0,right = 0,l=0,r=0;     cin >> n >> c;
    vector<ll> vec(n,0),vec1,vec2;
    for(auto &x : vec)  cin >> x;

    for(ll i = 0; i < n; i++){
        left = vec[i] + i + 1;
        right = vec[i] + n - i;
        vec1.push_back(left);
        vec2.push_back(right);
    }
    sort(vec1.begin(),vec1.end());
    sort(vec2.begin(),vec2.end());
    for(auto v : vec1) cout << v << " ";
    cout << endl;
    for(auto v: vec2) cout << v << " ";

    if(vec1[0] < vec2[0])
        vec1.swap(vec2);
    ll j = 0, k = 0;
    for(ll i = 0; i < n; i++){
        cnt++;
        if(r == 0){
            cost += vec2[j];
            r = 1,l = 0;
            j++;
        }
        else if(l == 0) {
            cost += vec1[k];
            l = 1, r = 0;
            k++;
        }

        if(cost == c){
            cnt++;
            break;
        }
        else if(cost > c) break;
    }
    cout << cnt - 1 << "\n";

 
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