#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    string s,str;
    cin>>s;
    str[0]=s[0];
    int count=0;
    
    if(s[0]==s[1] && s[1]==s[2])
        cout<<-1<<endl;
    else if(s[0]==s[1])
        cout<<s[2]<<endl;
    else if(s[1]==s[2])
        cout<<s[0]<<endl;
    else
        cout<<s[1]<<endl;
    
    return 0;
}