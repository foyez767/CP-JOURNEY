#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    string s1{},s2{},str{};
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++){
        if(s1[i] !=s2[i])
            cout<<1;
        else
            cout<<0;       
    }
    return 0;
}