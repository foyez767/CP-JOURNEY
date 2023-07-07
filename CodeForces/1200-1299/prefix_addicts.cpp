//**********In the name of Allah, most Gracious and Merciful******
//Oct/09/2022 14:58UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    ll n=0,a=0,k=0,init=0,j=0;     cin>> n>>k;
    vector<ll>ps;
    for(ll i=1;i<=k;i++) {
        cin>>a;
        ps.push_back(a);
    }
    reverse(ps.begin(),ps.end());
    if(n==1 or k==1){
        cout<< "YES" <<nn;
        return;
    }

    list<ll>li;
    for(ll i=0; i<k-1; i++){
        a=ps[i]-ps[i+1];
        li.push_front(a);
    }
    init=ps[k-1];
    a=li.front();
    n-=k-1;
    
    if(is_sorted(li.begin(),li.end())){
        while(n>1){
        li.push_front(a);
        init-=a;
        n--;
    }
        li.push_front(init);
        if(is_sorted(li.begin(),li.end()))
            cout<< "YES" <<nn;
        else cout<< "NO" <<nn;
    }
    else cout<< "NO" <<nn;
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}