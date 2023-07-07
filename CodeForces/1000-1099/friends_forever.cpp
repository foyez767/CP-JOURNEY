//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    string s;
    ll n=0,q=0,a=0,b=0,cnt=0;     cin>> n>> q;

    vector<pair<ll,ll>> frie;

    for(ll i=0; i<q; i++){
        cin>> a>> b;
        frie.push_back(make_pair(a,b));
    }
    sort(frie.begin(),frie.end());
    cin>> s;

    ll k=0;
    for(auto f: frie)
    {
        a=f.first,b=f.second;
        a--,b--;
        if(s[a]=='1')
            s[b]='1';
    }

    for(ll i=0; i<s.length(); i++){
        if(s[i]=='1'){
            cnt++;
        }
    }

    cout<< cnt <<nn;
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
// cin>>t;
while(t--)   solve();
    
    return 0;
}