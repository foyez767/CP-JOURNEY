#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  ll d=0,x=0;
  cin>>d;
  vector<ll>vec(d+1,0);
  vec[0]=0;
  for(int i=1;i<=d;i++){
    cin>>x;
    vec.push_back(x);
  }
 std::sort(vec.begin(),vec.end());
    ll min=0,max=0;
    max=vec[d-1];
    int div[max+1];
    //cut all divisor of maximum number
    for(int i=1;i<=max;i++){
        if(max%i==0)
            div[i]=i;

    }
    sort(vec.begin(),vec.end());
    min=vec[d-1];
    cout<<max<<" "<<min<<"\n";
    
    return 0;
}