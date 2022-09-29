//Aug/24/2022 08:56UTC-6 :58A
#include<bits/stdc++.h>
#define outer0(b) for(int i=0;i<b;i++)
#define outer1(b) for(int i=1;i<=b;i++)
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    string s,str;
    cin>>str;
    for(int i=0;i<str.length();i++){
      if(str[i]=='h'||str[i]=='e'||str[i]=='l' ||str[i]=='o'){
        s+=str[i];
      }
    }
    ll flag=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='h' ){
            if(s[i+1]=='e' ){
                if(s[i+2]=='l'){
                    if(s[i+3]=='l'){
                        if(s[i+4]=='o'){
                            flag=1;break;
                        }else{
                s.erase(i+4,1),i--;
            }
                    }else{
                s.erase(i+3,1),i--;
            }
                }else{
                s.erase(i+2,1),i--;
            }
            }else{
                s.erase(i+1,1),i--;
            }
        }else{
            s.erase(i,1);
            i--;
        }
        if(s.length()<5) break;
    }
    (flag==1)? cout<<"YES"<<nn : cout<<"NO"<<nn;

    return 0;
}