//Aug/11/2022 11:17UTC-6 : 248A
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    ll n=0;
    cin>>n;
    ll a=0,b=0,x=0,y=0,sum=0;
    while(n--){
        ll l=0,r=0;
        cin>>l>>r;
        (l==0)? a++ : b++;
        (r==0)? x++ : y++;      
    }
    (a>b)? sum+=b : sum+=a;
    (x>y)? sum+=y :sum+=x;
    cout<<sum<<endl;

    return 0;
}