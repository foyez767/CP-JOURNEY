#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    int n=0,x=0,m=0,t=0,d=0,age=0;
    cin>>n>>m>>x>>t>>d;

    if(m>=x && m<=n)
        cout<<t<<endl;
    else {
        age=t-d*(x-m);
        cout<<age<<endl;
    }
    return 0;
}