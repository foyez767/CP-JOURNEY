//Aug/11/2022 11:46UTC-6 :148A
#include<bits/stdc++.h>
#define ll long long
#define end '\n'
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    ll k=0,l=0,m=0,n=0,d=0;
    cin>>k>>l>>m>>n>>d;
    int an=0;
    for(int i=1;i<=d;i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
            an++;
    }
    cout<<an<<end;
    
    return 0;
}