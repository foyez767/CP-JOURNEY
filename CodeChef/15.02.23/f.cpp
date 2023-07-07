#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll a,b,od1 = 0,od2=0, eve = 0,cntOd = 0,ad = 0, bd =  0;         cin >> a >> b;
    string s1,s2;   cin >> s1 >> s2;
    ll cnt1 [27] {},cnt2[27]{};


    for(ll i = 0; i < s1.length(); i++){
        cnt1[s1[i] - 'a']++;
    }
    
    for(ll i = 0; i < s2.length(); i++){
        cnt2[s2[i]-'a']++;
    }

    for(ll i = 0; i < 27; i++){
        if(cnt2[i] > 0 and cnt2[i] % 2 == 0){
            if(cnt1[i] % 2 != 0){
                cout<< "NO\n";
                return;
            }
        }

        if((cnt1[i]+cnt2[i]) % 2 == 1) od1++;
    }
    

    if((od2) % 2 == 0 and od1 == 0) cout << "YES\n";
    else if((od2) % 2 == 1 and od1 == 1) cout << "YES\n";
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