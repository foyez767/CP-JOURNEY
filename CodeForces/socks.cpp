//Aug/30/2022 04:27UTC-6:
#include<bits/stdc++.h>
#define outer0(b) for(int i=0;i<b;i++)
#define outer1(b) for(int i=1;i<=b;i++)
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll n=0,x=0,max=0;
    cin>>n;
    set<ll>s;
    vector<ll>vec;
    ll arr[2*n];
    for(ll i=0;i<(2*n);i++){
        cin>>x;
        auto it=s.find(x);
        if(it==s.end()){
            s.insert(x);           
            vec.push_back(s.size());
        }else{
            s.erase(x);
        }
    }
    auto it=max_element(vec.begin(),vec.end());
    cout<<*it<<nn;
    
    return 0;
}