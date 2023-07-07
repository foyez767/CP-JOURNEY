//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    string s="a",t="a",add;
    ll q=0,d=0,k=0;
    cin>> q;
    while(q--){
        cin>> d>> k>> add;
        sort(add.begin(),add.end());
        if(d==1){
            while(k--){
                s=s+add;
            }

        }else{
            for(ll i=0;i<k;i++)
                t+=add;
        }
        if(s<t) cout<< "YES" <<nn;
        else cout<< "NO" <<nn;
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