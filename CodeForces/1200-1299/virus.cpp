//**********In the name of Allah, most Gracious and Merciful******
//Oct/26/2022 18:35UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    ll n=0,m=0,take=0,safe=0,spread=0,first_gap=0;      cin>> n>> m;
    vector<ll> vec(m,0),gap;
    for(auto &x: vec)   cin>> x;

    sort(vec.begin(),vec.end());

    if(m==1) gap.push_back(n-1);
    else{
        first_gap= vec[0]-1+n-vec[m-1];
        gap.push_back(first_gap);
        for(ll i=1; i<m; i++)
            gap.push_back(vec[i]-vec[i-1]-1);
    }

    sort(gap.begin(),gap.end(),greater<ll>());

    for(ll i=0; i<gap.size(); i++)
    {
        take= gap[i] - spread;

        if(take<1) break;
        else if(take==1){
            safe++;
            spread+=2;
        }else{
            safe++;
            take-=2;
            spread+=2;
            if(take==1){
                safe++;
                spread+=2;
            }else if(take>1){
                safe+=take;
                spread+=2;
            }
        }
    }
    cout<< n-safe <<nn;
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}