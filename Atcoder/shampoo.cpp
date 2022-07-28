#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    int v=0,a=0,b=0,c=0;
    cin>>v>>a>>b>>c;
    while(true){
        if(v>=a)
            v-=a;
        else
            {
                cout<<"F"<<endl;
                break;
            }
        if(v>=b)
            v-=b;
        else
            {
                cout<<"M"<<endl;
                break;
            }
        if(v>=c)
            v-=c;
        else
            {
                cout<<"T"<<endl;
                break;
            }
    }
    return 0;
}