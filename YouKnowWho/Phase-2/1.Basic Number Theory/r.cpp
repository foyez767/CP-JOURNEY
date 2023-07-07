//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define lim 102
#define nn "\n"
using namespace std;
 
vector<ll> factor(lim,0);

void solve(){
    ll n=0,x=0,a=0,k=0;     cin>> n;
    cout<<n<<" =";
    map<ll,ll> mp;

    for(ll i= n; i>=2; i--){
        x = i;
        while(x != 1){
            mp[factor[x]]++;
            x/=factor[x];
        }
    }
    
    for(auto m: mp){
        cout<< " "<<m.first<<" ("<<m.second<<")";
        if(k!=(mp.size()-1)) cout<<" *";
        k++; 
    }
    cout<< nn;

 }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    
    for(ll i=2; i<=lim;i++)
        factor[i]=i;  

    for(ll i=2;i*i<=lim;i++){
        if(factor[i]==i){
            for(int j=i*i;j<=lim;j+=i)
                factor[j]=i;
        }
    }
    cin>>t;
    // while(t--)   solve();    
    for(ll i=1; i<=t; i++){
        cout<< "Case "<<i<<": ";
        solve();
    }

    return 0;
}