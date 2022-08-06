#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    int len=0,x=0,count=0,n=0;
    string s,str;
    cin>>len;
    cin>>s;
    for(int i=0;i<str.length();i++){
        if(str[i]!='.'){
            s[n]=str[i];
            n++;
        }
    }
    if(len<=1){
        cout<<0<<"\n";
        return 0;
    }
    for(int i=0;i<(len-1);i++){
        for(int j=i+1;j<len;j++){
            if(s[i]==s[j]){
                s.erase(i,1);
                i--;
                count++;
            }
        }
    }
    cout<<count<<"\n";
    
    return 0;
}