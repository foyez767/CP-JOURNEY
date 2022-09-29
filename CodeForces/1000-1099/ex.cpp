//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

  
void solve(){
    string s;
    cin>>s;
    for(ll i=0;i<s.length();i++){
        s.erase(i,1);
        i--;
    }
    cout<<s<<endl;
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
// cin>>t;
while(t--){
solve();
}
    
    return 0;
}