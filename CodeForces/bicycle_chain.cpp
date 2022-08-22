//Aug/21/2022 22:44UTC-6 :215A
#include<bits/stdc++.h>
#define ll long long
#define nn "\n" 
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll n=0,m=0;
    cin>>n;
    array<ll,51>pedel;
    array<ll,51>wheel;
    for(int i=0;i<n;i++)
        cin>>pedel[i];
    cin>>m;
    for(int i=0;i<m;i++)
        cin>>wheel[i];
    
    vector<ll>vec ;
    int x=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            x=wheel[i]%pedel[j];
            if(x==0){
                vec.push_back(wheel[i]/pedel[j]);
            }
        }
    }
    ll max=vec[0],cnt=0;
    for(int i=1;i<vec.size();i++){
        if(max<vec[i]){
            max=vec[i];
        }
    }
    for(int i=0;i<vec.size();i++){
        if(max==vec[i])
            cnt++;
    }
    cout<<cnt<<nn;
    return 0;
}