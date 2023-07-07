#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll b,s,x,batti = 0;     cin >> b >> s;
    vector<ll>vec,cnter(1000,0);
    for(ll i = 0; i < b; i++){
        cin >> x;
        cnter[x] = 1;
        vec.push_back(x);
    }

    for(ll i = 1; i < cnter.size(); i++){
        if(cnter[i] == 0){
            if(s - i < 0) break;
            else{
                batti = 1;
                cnter[i] = 1;
                s -= i;
                vec.push_back(i);
            }
        }
    }

    sort(vec.begin(),vec.end());

    for(ll i = 0; i < vec.size()-1; i++){
        if(vec[i+1] - vec[i] != 1 ){
            cout << "NO\n";
            return;
        }
    }
    if(s == 0)
        cout << "YES\n";
    else cout << "NO\n";
 
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