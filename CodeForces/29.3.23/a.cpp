#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string l, r; cin >> l >> r;
    int a = l.length(), b = r.length();
    int diff = stoll(r) - stoll(l);

    if(a == b and a == 1){
        cout << r << "\n";
    }else if(diff >= 100){
        for(int i = 1; i <= b - 2; i++)
            cout << 9;
        cout << 0 << "\n";
    }else if (diff < 100){
        int lastd = (int)l[a - 1], lastd2 =(int) r[b - 1];
        int diff2 = lastd2 - lastd;
        if(lastd + diff2 >= 9){
            l[a - 1] = '9';
            cout << l <<  "\n";
        }else
    }
 
}
 
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}