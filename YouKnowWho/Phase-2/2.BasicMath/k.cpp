//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    string a; ll b, ans = 0;
    cin>> a >> b;

    for(ll i = 0; i < a.length(); i++){
        if(a[i] == '-') continue;
        ans = (ans * 10 + (a[i] - '0') ) % b;
    }
    // if(a[0]=='-' and b > 0){
    //     ans = (b - ans) % b;
    // }
    if(!ans) cout<< "divisible" <<nn;
    else cout<< "not divisible" <<nn;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    for(int i = 1; i <= t; i++){
        cout<< "Case "<< i <<": ";
        solve();
    }
    
    return 0;
}