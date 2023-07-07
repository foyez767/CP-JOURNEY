//**********In the name of Allah, most Gracious and Merciful******
//Sep/30/2022 20:39UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    string s,t;
    cin>>s >>t;
    sort(t.begin(),t.end());

    if(t.length()==1 and t[0]=='a') cout<< 1 <<nn;
    else if (t.length()>1 and t[0]=='a') cout<< -1 <<nn;
    else{
        ll n=s.length();
        cout << (1LL<<n) <<nn;    //2^n= 1<<n
    }

 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}