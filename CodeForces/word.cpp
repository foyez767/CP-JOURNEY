//Aug/05/2022 19:02UTC-6:59A
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    string s,upper,lower;
    cin>>s;
    upper=s;
    lower=s;
    ll up=0,lo=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z')         
            up++;
        else if(s[i]>='a' && s[i]<='z')
            lo++;
    }
    if(lo>=up){
        for(int i=0;i<s.length();i++){
            s[i]=tolower(s[i]);
        }
    }else{
        for(int i=0;i<s.length();i++){
            s[i]=toupper(s[i]);
        }
    }
    cout<<s<<endl;

    return 0;
}