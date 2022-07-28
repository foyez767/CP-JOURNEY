#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    long long n=0,m=0,a=0;
    long long p=0,q=0;
    cin>>n>>m>>a;

    if(n % a==0)
        p=n/a;
    else
        p=(n/a)+1;
    if(m % a==0)
        q=m/a;
    else
        q=(m/a)+1;
        
    cout<<p*q<<endl;

    return 0;
}