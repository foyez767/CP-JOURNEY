//Aug/23/2022 22:24UTC-6 :214A
#include<bits/stdc++.h>
#define outer0(b) for(int i=0;i<b;i++)
#define outer1(b) for(int i=1;i<=b;i++)
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll n=0,m=0,nnn=0,mm=0,cnt=0;
    cin>>n>>m;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            nnn=((i*i)+j);
            mm=(i+(j*j));
            if(n==nnn && m==mm)
                cnt++;
        }
    }
    cout<<cnt<<nn;

    return 0;
}