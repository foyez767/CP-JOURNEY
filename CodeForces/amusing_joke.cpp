//Aug/10/2022 21:25UTC-6 : 141A
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    string s,s1,s2;
    cin>>s1>>s2>>s;
    int count[26] {};
    int j=0;
    for(int i=0;i<s1.length();i++){
            count[s1[i]-65]++;
    }
    for(int i=0;i<s2.length();i++){
            count[s2[i]-65]++;
    }
    for(int i=0;i<s.length();i++){
        count[s[i]-65]--;
    }
    ll flag=0;
    for(int i=0;i<26;i++){
            if(count[i]!=0){
                flag=1;
                break;
            }
    }
    (flag ==0)? cout<<"YES\n" :cout<<"NO\n";
    
    return 0;
}