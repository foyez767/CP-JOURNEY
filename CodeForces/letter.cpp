#include<bits/stdc++.h>
#define ll long long
#define nn  "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    int n=0;
    string s,st,str;
    getline(cin,s);
    getline(cin,st);
    int counter[125]{};
    char c=32;
    for(int i=0;i<s.length();i++){
        if(s[i]!=c)
          counter[s[i]]++; 
    }
    for(int i=0;i<st.length();i++){
        if(st[i]!=c)
            str+=st[i];
    }
    int flag=1;
    while(flag){
        for(int i=0;i,str.length();i++){
            if(counter[str[i]]<1){
                flag=0;break;
            }else if(counter[str[i]]>=1){
                counter[str[i]]--;
            }
        }
    }
    (flag==0)? cout<<"NO"<<nn : cout<<"YES"<<nn;

    return 0;
}