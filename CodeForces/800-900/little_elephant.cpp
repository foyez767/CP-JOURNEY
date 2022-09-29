//Aug/20/2022 06:55UTC-6 :205A
#include<bits/stdc++.h>
#define ll long long
#define nn  "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll n=0,x=0;
    cin>>n;
    vector<ll>vec;
    for(int i=0;i<n;i++){
        cin>>x;
        vec.push_back(x);
    }
    auto it=min_element(vec.begin(),vec.end());
    ll min=*it;
    ll cnt=count(vec.begin(),vec.end(),min);
    if(cnt>1)
        cout<<"Still Rozdil"<<nn;
    else{
        for(int i=0;i<vec.size();i++){
            if(vec[i]==min){
                cout<<i+1<<nn;
                return 0;
            }
        }
    }
   
    return 0;
}