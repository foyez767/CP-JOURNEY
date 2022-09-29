#include<bits/stdc++.h>
#define ll long long
#define nn  "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    string s,str;
    cin>>s>>str;
    reverse(str.begin(),str.end());
    (s==str)? cout<<"YES"<<nn : cout<<"NO"<<nn;

    return 0;
}