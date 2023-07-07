#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;   cin >> n;
    
    if(n % 2 == 0) cout << n/2 << " " << n/2 << "\n";
    else if(n % 10 != 9) cout << n/2 << " " << n - n/2 << "\n";
    else{
        ll x = n , y = 4,p = 1,cnt = 1,a = 0, b= 0;
        x /= 10;
        while(x > 0){
            ll lastdig = (x % 10) ;

            a = lastdig / 2;
            b = lastdig - lastdig/2;
            if(a != b){
                if(cnt % 2)
                    y += (b * (ll)pow(10,p));
                else y += (a * (ll)pow(10,p));
                cnt++;
            }else
                y += (a * (ll)pow(10,p));

            x /= 10;
            p++;
        }
        cout << y << " " << n - y << "\n";
    }
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