#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    double h=0;
    long double hor=0;
    cin>>h;
    hor=sqrt(h*(12800000+h));
    printf("%.9Lf",hor);

    return 0;
}