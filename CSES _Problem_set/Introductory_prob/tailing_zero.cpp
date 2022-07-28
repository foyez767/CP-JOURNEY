#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  ll n=0,count=0;
  cin>>n;
  
  while(n){

      count+=(n/5);
      n/=5;

  }
  cout<<count<<endl;
  
    return 0;
}