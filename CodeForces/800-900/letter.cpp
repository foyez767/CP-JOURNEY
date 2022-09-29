//Aug/25/2022 06:49UTC-6 :43B
#include<bits/stdc++.h>
#define ll long long
#define nn  "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    int n=0;
    string s,st;
    getline(cin,s);
    getline(cin,st);
    int counter[125]{};
    char ch=32; //space ascii code
    for(int i=0;i<s.length();i++){
        if(s[i]!=ch)
          counter[s[i]]++; 
    }
    for(int i=0;i<st.length();i++){
        if(st[i]!=ch){
            counter[st[i]]--;
        }
    }
    //check
    for(int  i=0;i<125;i++){
        if(counter[i]<0){
            cout<<"NO"<<nn;
            return 0;
        }
    }
    cout<<"YES"<<nn;

    return 0;
}