#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<string> month = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

bool isLYear(ll n){
    if(n % 4 == 0){
        if(n % 100 == 0){
            if(n % 400 == 0)
                return true;
            else return false;
        }else return true;
    }
return false;
}

void solve(){
    ll d1,d2,y1,y2,cnt = 0,x=0; string m1,m2; char c1;
    cin >> m1>> d1 >> c1 >> y1;
    cin >> m2 >> d2 >> c1 >> y2;

    if(y1 == y2){
        if(isLYear(y1)){
            if((m1 == month[0] or m1 == month[1]) and (m2 != month[0] or m2 != month[1] or (m2 == month[1] and d2==29))){
                cout << 1 << "\n";
                return;
            }
        }else{
            cout << 0 << "\n";
            return;
        }
    }

    if(isLYear(y1)){
        if(m1 == month[0] or m1 == month[1]){
            cnt++;
        }
    }

    if(isLYear(y2)){
        if(m2 != month[0] and m2 != month[1])
            cnt++;
        else if(m2 == month[1] and d2 == 29)
            cnt++;
    }

    if(cnt == 2){
        x = (y2-y1-2)/4;
    }else x = (y2 - y1) / 4;

    if(x >= 0) cnt += x;

    cout << cnt << "\n";
 
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++){
        cout << "Case " << i << ": ";
        solve();
    }
    
    return 0;
}