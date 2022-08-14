//Aug/14/2022 00:28UTC-6 : 282A
#include<bits/stdc++.h>
#define ll long long
#define end "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    int x=0,n=0;
    cin>>n;
    string s;
    while(n--){
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='+' && s[i+1]=='+')
                x++;
            if(s[i]=='-' && s[i+1]=='-')
                x--;
        }
    }
    cout<<x<<end;
    return 0;
}