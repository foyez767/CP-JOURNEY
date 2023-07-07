//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll n=0,x=0;     cin>>n;
    vector<ll>vec(n,0);
    for(auto &x:vec)    cin>>x;
    sort(vec.begin(),vec.end());
    ll num=(ll)(vec[0]*vec[n-1]);
    vector<ll>div;
    for(ll i=2;i*i<=num;i++){
        if(num%i==0){
            div.push_back(i);
                if(i != (num/i))
                    div.push_back(num/i);
            }
        }
        ll flag=0;
        sort(div.begin(),div.end());
        for(ll i=0; i<vec.size(); i++){
            if(vec[i]!=div[i]){
                flag=1;
            }
        }
    (flag==1) ? cout<< -1 <<nn : cout<<num<<nn;

 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}