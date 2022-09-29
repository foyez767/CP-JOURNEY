//Aug/12/2022 22:33UTC-6	: 320A
#include<bits/stdc++.h>
#define ll long long
#define end "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  string s;
  cin>>s;
  ll flag=0;
  for(int i=0;i<s.length();i++){
    if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4'){
        s.erase(i,3);
        i--;
    }else if(s[i]=='1'&&s[i+1]=='4'){
        s.erase(i,2);i--;
    }else if(s[i]=='1'){
        s.erase(i,1);i--;
    }else{
        flag=1;
        break;
    }
  }
  if(flag==0)
    cout<<"YES"<<end;
  else
    cout<<"NO"<<end;
    
    return 0;
}