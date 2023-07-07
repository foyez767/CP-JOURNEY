//**********In the name of Allah, most Gracious and Merciful******
//Oct/20/2022 11:54UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    ll a=0,b=0,c=0,aa=0,bb=0,cc=0;     cin>> a >>b;
    c=a+b;
    string sa,sb,sc;
    sc=to_string(c);
    sa=to_string(a);
    sb=to_string(b);
    for(ll i=0;i<sc.length();i++){
        if(sc[i]=='0'){
            sc.erase(i,1);
            i--;
        }
    }
    for(ll i=0;i<sa.length();i++){
        if(sa[i]=='0'){
            sa.erase(i,1);
            i--;
        }
    }
    for(ll i=0;i<sb.length();i++){
        if(sb[i]=='0'){
            sb.erase(i,1);
            i--;
        }
    }
    aa= stoll(sa,nullptr,10);
    bb=stoll (sb,nullptr,10);
    cc=stoll(sc,nullptr,10);

    if(aa+bb==cc) cout<<"YES"<<nn;
    else cout<<"NO"<<nn;
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
// cin>>t;
while(t--)   solve();
    
    return 0;
}