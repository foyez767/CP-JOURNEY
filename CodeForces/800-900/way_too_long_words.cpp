#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    int t=0;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int leng=s.length();
        if(leng>10){
            cout<<s[0]<<leng-2<<s[leng-1]<<"\n";

        }else{
            cout<<s<<"\n";
        }
    }
    return 0;
}