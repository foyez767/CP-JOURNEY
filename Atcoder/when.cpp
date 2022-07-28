#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    int k;
    cin>>k;
    if(k<60){
        if(k<10)
            cout<<21<<":0"<<k<<"\n";
        else
            cout<<21<<":"<<k<<"\n";

    }else{
        k-=60;
        if(k<10)
            cout<<22<<":0"<<k<<"\n";
        else
            cout<<22<<":"<<k<<"\n";
    }
    return 0;
}