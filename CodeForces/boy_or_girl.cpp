#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int count[27] {0};
    for(int i=0;i<s.length();i++){
        if(s[i]==s[i+1]){
            s.erase(i,1);
            i--;
        }
    }
    ll len=s.length();
    if(len%2==0)
        cout<<"CHAT WITH HER!\n";
    else
        cout<<"IGNORE HIM!\n";

    return 0;
}