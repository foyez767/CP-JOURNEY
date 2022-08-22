//Aug/14/2022 22:44UTC-6	 :272A
#include<bits/stdc++.h>
#define ll long long
#define end "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    int n=0,x=0;
    cin>>n;
    int to_finger=0;
    for(int i=0;i<n;i++){
        cin>>x;
        to_finger+=x;
    }
    ll way=0;
    for(int i=1;i<=5;i++){
        if((to_finger+i)%(n+1)!=1)
            way++;
    }
    cout<<way<<end;

    return 0;
}