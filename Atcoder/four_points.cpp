#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    int x1=0,x2=0,x3=0,y1=0,y2=0,y3=0,a=0,b=0;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;

    if(x1==x2)
        a=x3;
    else if(x1==x3)
        a=x2;
    else
        a=x1;
        
    if(y1==y2)
        b=y3;
    else if(y1==y3)
        b=y2;
    else
        b=y1;

    cout<<a<<" "<<b<<endl;

    return 0;
}