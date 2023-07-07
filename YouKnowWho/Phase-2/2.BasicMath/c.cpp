//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;


 
void solve(){
    ll arr [3] {};
    ll sum = 0;
    for(int i = 0; i<3; i++) cin>> arr[i];
    for(int i = 0; i<3; i++){
        sum += arr[i];
    }
    cout<< sum - 5 << nn;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    // cin>>t;
    while(t--)   solve();
    
    return 0;
}