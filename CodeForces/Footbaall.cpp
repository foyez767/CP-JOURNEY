//Aug/23/2022 07:23UTC-6 :96A
#include<bits/stdc++.h>
#define outer0(b) for(int i=0;i<b;i++)
#define outer1(b) for(int i=1;i<=b;i++)
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    string s;
    cin>>s;
    char c='1',ch='0';ll one_cnt=0,zero_cnt=0;
    for(int i=0;i<s.length();i++){
        if(one_cnt>=7 || zero_cnt>=7){
            cout<<"YES"<<nn;
            return 0;
         }
        if(s[i]==c){
            one_cnt++;
            zero_cnt=0;
        }
        else if(s[i]==ch){
            zero_cnt++;one_cnt=0;
        }
        if(one_cnt>=7 || zero_cnt>=7){
            cout<<"YES"<<nn;
            return 0;
         }
    }
    cout<<"NO"<<nn;
    return 0;
}