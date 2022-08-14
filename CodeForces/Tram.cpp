//Aug/12/2022 22:23UTC-6 : 116A
#include<bits/stdc++.h>
#define ll long long
#define end "\n"
 
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll n=0;
    cin>>n;
    ll cap=0,q=0,p=0;
    while(n--){
        ll a=0,b=0;
        cin>>a>>b;
        p=(q-a)+b;
        if(cap<p)
            cap=p;
        q=p;            
    }
    cout<<cap<<end;
    
    return 0;
}
