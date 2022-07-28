#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    int n=0,a=0,b=0,c=0,count=0;
    cin>>n;
    while(n){
        a=0,b=0,c=0;
        cin>>a>>b>>c;
        if((a+b+c)>=2)
            count++;

        n--;
    }
    cout<<count<<"\n";
    
    return 0;
}