//Aug/13/2022 22:17UTC-6 : 112A
#include<bits/stdc++.h>
#define ll long long
#define end "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    string s1,s2;
    cin>>s1>>s2;
    ll flag=0;
    for(int i=0;i<s1.length();i++){
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
        if(s1[i]==s2[i])
            flag=0;
        else if(s1[i]<s2[i]){
            cout<<-1<<end;
            flag=1;break;
        }else if(s1[i]>s2[i]){
            cout<<1<<end;
            flag=1;break;
        }
    }
    if(flag==0) cout<<0<<end;

    return 0;
}