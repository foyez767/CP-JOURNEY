//Sep/12/2022 08:13UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=0;
cin>>t;
while(t--){
    ll n=0,cnt=0,x=0,flag=0;
    cin>>n;
    vector<ll>vec;
    vector<ll>ans;
    for(int i=0;i<n;i++){
        cin>>x;
        vec.push_back(x);
        if(vec[i]>0){
            cnt++;
        }else if(cnt !=0){
            ans.push_back(cnt);
            cnt=0;
        }
    }
    if(cnt !=0) ans.push_back(cnt);
    
     x=ans.size();
     (x>=2)? cout<<2<<nn : cout<<x<<nn;
}
    return 0;
}