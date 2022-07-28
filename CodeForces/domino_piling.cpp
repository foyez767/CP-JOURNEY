#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    int row=0,col=0,cnt=0;
    cin>>row>>col;

    while(row>1){
        row-=2;
        cnt+=col;
    }
    if(row>=1)
        cnt+=(col/2);
    cout<<cnt<<"\n";

    return 0;
}