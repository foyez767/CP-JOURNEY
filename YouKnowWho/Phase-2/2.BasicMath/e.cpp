#include<bits/stdc++.h>
#define ll long long
using namespace std;

 
void solve(){
    ll x = 0, y = 0, m =10,a,b;    cin >> x >> y;
    
   if(x == y) cout << "=" << "\n";
   else if((x == 2 and y == 4) or (x == 4 and y == 2)) cout << "=\n";
   else if((x == 3 and y == 2) or (x == 2 and y == 3)){
        if(x == 3) cout << ">\n";
        else cout << "<\n";
   }else if(x == 1 or y == 1){
        if(x == 1) cout << "<\n";
        else cout << ">\n";
   }else if((x >= 3 and y>=3) or (x >= 3 and y <3) or (x < 3 and y >= 3) ){
        if(x < y) cout << ">\n";
        else if(x > y) cout << "<\n";
        else cout << "=\n";
   }
    
 }
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    // cin>>t;
    while(t--)   solve();
    
    return 0;
}