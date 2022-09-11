//Aug/29/2022 11:49UTC-6 :22A
#include<bits/stdc++.h>
#define outer0(b) for(int i=0;i<b;i++)
#define outer1(b) for(int i=1;i<=b;i++)
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    set<int>s;
    ll n=0,x=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        s.insert(x);
    }
    if(s.size()<=1){
        cout<<"NO"<<nn;
        return 0;
    }
    x=*(s.begin());
    s.erase(x);
    cout<<*(s.begin())<<nn;
    
    return 0;
}