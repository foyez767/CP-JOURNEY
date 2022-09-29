#include<bits/stdc++.h>
#define outer0(b) for(int i=0;i<b;i++)
#define outer1(b) for(int i=1;i<=b;i++)
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    ll t=0;
    cin>>t;
    while(t--){
        string str="Timru";
        ll n=0;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        if(s==str)
            cout<<"YES"<<nn;
        else
            cout<<"NO"<<nn;
    }
    return 0;
}