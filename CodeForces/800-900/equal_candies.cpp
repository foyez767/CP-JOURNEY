//Sep/05/2022 22:11UTC-6
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
    ll n=0,x=0,min=0,sum=0;
    cin>>n;
    vector<ll>vec;
    for(int i=0;i<n;i++){
        cin>>x;
        vec.push_back(x);
    }
    min=*(min_element(vec.begin(),vec.end()));
    for(int i=0;i<vec.size();i++){
        sum+=(vec[i]-min);
    }
    cout<<sum<<nn;
}   
 return 0;
}