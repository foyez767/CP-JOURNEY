#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    ll n , s, r,y,t;    cin>> n >> s >> r;
    ll max = s - r;
    cout<< max << " ";
    n--;
    ll arr [n+1] {};
    while(r != 0){
         for(ll i = 1; i<=n; i++){
            if(r == 0) break;
            else{
                arr[i] ++;
                r-=1;
            }
        }
    }

    for(int i = 1 ; i<= n; i++) cout<< arr[i] << " ";
    cout<< endl;
 }
 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}