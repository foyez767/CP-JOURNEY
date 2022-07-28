#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    int a=0,b=0,c=0,min=0,max=0;
    cin>>a>>b>>c;
    if(a<c){
        min=a;
        max=c;
    }
        
    else{
        min=c;
        max=a;
    }
    bool flag=true;
    for(int i=min;i<=max;i++){
        if(i==b){
            flag=false;
            break;
        }
    }
    if(flag==false)
        cout<<"Yes"<<"\n";
    else
        cout<<"No"<<"\n";

    return 0;
}