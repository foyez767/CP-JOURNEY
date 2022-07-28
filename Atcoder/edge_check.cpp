#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0); 
    int a=0,b=0,min=0,max=0;
    cin>>a>>b;
    
    if(a >1 && b<10){
        if((a+1==b) || (a-1)==b)
            cout<<"Yes"<<"\n";
        else
            cout<<"No"<<"\n";

    }else
        {
            if(a>b){
                min=b;
                max=a;
            }else{
                min=a;
                max=b;
            }
            if((min==1 && max==2)||(min==9 && max==10)||(min==1 && max==10))
                cout<<"Yes"<<"\n";
            else
                cout<<"No"<<"\n";
            
        }

    return 0;
}