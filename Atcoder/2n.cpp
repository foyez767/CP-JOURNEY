#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    int n=0,pro=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        pro*=2;
    }
    cout<<pro<<"\n";
    
    return 0;
}