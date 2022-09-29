//Aug/06/2022 02:46UTC-6 :271A
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    int y=0,a=0,b=0,c=0,d=0,x=0;
    cin>>y;
    y++;
    while(1){
        x=y;
        d=x%10;
        x=x/10;
        c=x%10;
        x=x/10;
        b=x%10;
        x=x/10;
        a=x%10;
        x=x/10;

        if((a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)){
            cout<<y<<endl;
            break;
        }else{
            y++;
        }
    }
    return 0;
}