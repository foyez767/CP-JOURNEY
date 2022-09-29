//Aug/13/2022 23:20UTC-6: 133A
#include<bits/stdc++.h>
#define ll long long
#define end "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    string s,str {"HQ9"};
    cin>>s;
    ll flag=0;
    for(int i=0;i<str.length();i++){
        for(int j=0;j<s.length();j++){
            if(str[i]==s[j])
                flag=1;
        }
    }
    (flag !=0)? cout<<"YES"<<end : cout<<"NO"<<end;

    return 0;
}