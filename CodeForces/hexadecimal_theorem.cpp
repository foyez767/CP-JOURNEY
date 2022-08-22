#include<bits/stdc++.h>
#define ll long long
#define nn "\n"  
using namespace std;
vector<ll>fibo;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    ll n=0,x=0;
    cin>>n;
    if(n==3){
        cout<<1<<" "<<1<<" "<<1<<nn;
        return 0;
    }
    ll next_term {0};
    ll first=0,second=1;
    fibo.push_back(first);
    fibo.push_back(second);
    next_term=first+second;

    while(next_term<=n)
        {
            fibo.push_back(next_term);
            first=second;
            second=next_term;
            next_term=first+second;
        }
        fibo.pop_back();
    int size=fibo.size(),flag=1;
    ll a=fibo[size-1],b=0,c=0;
    ll diff=n-a;
    while(flag){
        for(int i=1;i<=(size-2);i++){
            for(int j=1;j<=(size-2);j++){
                if((fibo[i]+fibo[j])==diff){
                    b=fibo[i];c=fibo[j];flag=0;break;
                }
            }
            if(flag==0)
                break;
        }
    }
    cout<<a<<" "<<b<<" "<<c<<nn;

    return 0;
}