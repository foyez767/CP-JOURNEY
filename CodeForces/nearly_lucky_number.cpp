#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    string s;
    ll cnt=0;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='4' || s[i]=='7')
            cnt++;
    }
    if(cnt==4 || cnt==7)
        cout<<"YES\n";
    else
        cout<<"NO\n";
        
    return 0;
}