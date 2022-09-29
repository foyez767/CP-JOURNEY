//Aug/24/2022 01:20UTC-6 :124A
//Aug/24/2022 02:33UTC-6 : 
#include<bits/stdc++.h>
#define outer0(b) for(int i=0;i<b;i++)
#define outer1(b) for(int i=1;i<=b;i++)
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    ll n=0,a=0,b=0,z=0;
    cin>>n>>a>>b;
    z=(a+b+1);
    if(b==0 || a==0 && b==0)
        cout<<1<<nn;
    else if(a==0){
        if(b+1<n)
            cout<<b+1<<nn;
        else
            cout<<n<<nn;
    }
    else if(z>=n)
        cout<<n-a<<nn;
    else if(z<n)
        cout<<z-a<<nn;

    return 0;
}