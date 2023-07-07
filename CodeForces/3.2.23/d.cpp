#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, cnt = 0, x=0,y=0,unique = 0,maxi = 0; string s;   cin >> n >> s;
    ll UniCnt [27] {}, aCnt [27] {};

    for(ll i = 0; i < s.length(); i++){
        ll ch = s[i] - 'a'+1;
        if(UniCnt[ch] == 0) unique++;
        UniCnt[ch] ++;
    }

    vector < pair<ll,ll>>aP,bP;

    for(ll i = 0; i < s.length(); i++){
        ll ch = s[i] - 'a'+1;

        if(aCnt[ch] == 0){
            cnt ++;
            aCnt[ch] = 1;
        }
        aP.push_back(make_pair(i,cnt));

        UniCnt[ch]--;
        if(UniCnt[ch] == 0){
            unique--;
        }
        bP.push_back(make_pair(i+1,unique));
    }
    // for(auto v : aP) cout << v.first << " " << v.second << "\n";
    // cout << endl << endl;
    // for(auto v : bP) cout << v.first << " " << v.second << "\n";
    
    for(ll i = 0; i < aP.size(); i++){
        maxi = max(maxi, aP[i].second + bP[i].second ); 
    }
    cout << maxi << "\n";
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