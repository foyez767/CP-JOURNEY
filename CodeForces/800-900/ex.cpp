//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

  
void solve(){
    ll n=0,x=0,flag=0,i=0;
    cin>>n;
    vector<ll>vec;
    for(ll i=0;i<n;i++){
        cin>>x;
        vec.push_back(x);
    }

    for(i=vec.size()-1 ;i>=0;i--){
        x=count(vec.begin()+i,vec.end(),vec[i]);
        if(x>1){
            flag=1;
            break;
        }
    }
    (flag==1) ? cout<<i+1<<nn : cout<< 0 <<nn;
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--){
solve();
}
    
    return 0;
}