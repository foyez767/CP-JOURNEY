#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    int a=0,b=0,c=0,x=0;
    cin>>a>>b>>c>>x;
    float g=1;
    if( x<=a)
        printf("%.9f",g);
    else if(x>a && x<=b){
        g=(float)c/(b-a);
        printf("%.9f",g);
    
    }else{
        x=0;
        printf("%.9f",x);
    }
    return 0;
}