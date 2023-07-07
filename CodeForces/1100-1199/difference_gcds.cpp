//**********In the name of Allah, most Gracious and Merciful******
//Oct/13/2022 01:09UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll n=0,i=1,r=0,l=0,j=0,x=0,a=0;     cin>> n>> l>> r;
    vector<ll>vec;

    while(i<=n){
        a=(((l-1)/i)+1)*i;
        if(a>=l and a<=r)
            vec.push_back(a);

        i++;
    }    

    if(vec.size()==n){
        cout<< "YES" <<nn;
        for(auto v: vec)
            cout<<v<<" ";
        cout<<nn;

    }else   cout<< "NO" <<nn;
     
 }

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}