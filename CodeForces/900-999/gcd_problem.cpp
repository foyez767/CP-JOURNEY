//**********In the name of Allah, most Gracious and Merciful******
//Sep/24/2022 08:42UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    ll n=0,c=1,b=2,a=0;
    cin>>n;
    a=n-(c+b);
    while(__gcd(a,b)!=1){
        a--;
        b++;
    }
    cout<<a<<" "<< b <<" "<< c <<nn;

 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--){
    solve();
}
    
    return 0;
}

//**************************
// #include <bits/stdc++.h>
// #define ll long long
// #define nn "\n"
// using namespace std;
 
// void solve() {
//    ll n=0;
//    cin>>n;
//    if(n & 1){
//        ll x=n>>1, y=x;
//        while(__gcd(x,y)>1){
//             x++;
//             y--;
//        } 
//        cout<<x<<" "<< y<< " "<<1<<nn;
//    }else{
//     cout<<n/2<<" "<<(n/2)-1<<" "<<1<<nn;
//    }
// }
 
// int main() {
//    int t;
//    cin >> t;
//    while(t--) solve();
// }