//Aug/08/2022 09:16UTC-6 : 1108B
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  ll n=0,x=0;
  cin>>n;
  if(n==2){
    int a=0,b=0;
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;
    return 0;
  }
  vector<ll>vec(n+1);
  for(int i=1;i<=n;i++){
    cin>>x;
    vec[i]=x;
  }
  std::sort(vec.begin(),vec.end());
  ll max=vec[n];
  ll j=1;
  //count part
  int count[max+1] {0};
  for(int i=1;i<=max;i++){
    count[vec[i]]++;
    j++;
    if(j>=vec.size())
      break;
  }
  //cut all divisor of max
  for(int i=1;i<=max;i++){
    if(max%i==0){
      count[i]--;
    }
  }
  //now second number
  ll min=count[0];
  for(int i=1;i<=max;i++){
    if(count[i]==1)
      min=i;
  }
  cout<<max<<" "<<min<<endl;
    
    return 0;
}