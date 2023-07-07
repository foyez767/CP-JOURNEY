//**********In the name of Allah, most Gracious and Merciful******
//Nov/05/2022 05:29UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    int n, k, r, c;
    std::cin >> n >> k >> r >> c;
    
    ll org=(r+c) %k,diff=0;
    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=n; j++){
            diff= (i+j) %k;
            if(org==diff) cout<<"X";
            else cout<<".";
        }
        cout<<nn;
    }
    // cout<< nn;
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}