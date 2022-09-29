#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    ll n=0,m=0,flag=0;
    cin>>n>>m;
    //all prime between 1 to 50
    vector<ll>vec;
    for(int i=2;i<=50;i++){
        flag=1;
        for(int j=2;j<i;j++){
            if(i%j==0)
                flag=0;
        }
        if(flag==1)
            vec.push_back(i);
    }
    //solution
    flag=0;
    for(int i=0;i<vec.size();i++){
        if(vec[i]==n && vec[i+1]==m){
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}