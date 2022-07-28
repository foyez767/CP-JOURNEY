#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    string s,news;
    cin>>s;
    news[0]='0';
    for(int i=0;i<3;i++){
       news[i+1]=s[i];
    }
    
    for(int i=0;i<4;i++)
        cout<<news[i];
        cout<<"\n";

    return 0;
}