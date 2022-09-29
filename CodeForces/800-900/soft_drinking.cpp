//Aug/13/2022 23:08UTC-6 :151A
#include<bits/stdc++.h>
#define ll long long
#define end "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  ll n=0,k=0,l=0,c=0,d=0,p=0,nl=0,np=0,cnt=0;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  
  vector<ll>vec;
  vec.push_back((k*l)/nl);
  vec.push_back(c*d);
  vec.push_back(p/np);
    ll min=vec[0];
    for(int i=1;i<=2;i++){
        if(min>vec[i])
            min=vec[i];
    }
    cout<<floor(min/n)<<end;

    return 0;
}