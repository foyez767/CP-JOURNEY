//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll n=0,sum=0,x=0;     cin>> n;
    string s;       cin>> s;
    vector<ll> vec(n,0);
    for(auto &x: vec) cin>> x;

    for(ll i=1; i<n; i++)
    {
        if(s[i]=='1')
        {
            if(s[i-1]=='0' and vec[i-1]>vec[i]){
                s[i-1]='1';
                s[i]='0';
            }else if(s[i-1]=='0' and vec[i-1]<vec[i]){
                for(ll j=i+1; j<n; j++)
                {
                    if(s[j]=='1'){
                        if(vec[i-1]>vec[j]){
                            s[i-1]='1';
                            s[j]='0';
                            i=j;
                            break;
                        }
                    }else {
                        i=j;
                        break;
                    }
                }
            }
        }
    }

    for(ll i=0; i<n; i++)
    {
        if(s[i]=='1')
            sum+=vec[i];
    }
    cout<< sum <<nn;
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
// cin>>t;
while(t--)   solve();
    
    return 0;
}