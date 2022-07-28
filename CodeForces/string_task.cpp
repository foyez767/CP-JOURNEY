#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]>=65 && s[i]<=90)
            s[i]+=32;
    }
    
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'|| s[i]=='y'){
            s.erase(i,1);
            i--;
        }                  
    }
    
    for(int i=0;i<s.length();i++){
        cout<<"."<<s[i];
    }
    cout<<endl;

    return 0;
}