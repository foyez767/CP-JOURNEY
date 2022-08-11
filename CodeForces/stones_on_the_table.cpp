//Aug/08/2022 09:43UTC-6 : 266A
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    int n=0;
    cin>>n;
    string s;
    cin>>s;
    ll cnt=0;
    if(n==1)
        cout<<0<<endl;
    else{
        for(int i=0;i<s.length();i++){
            if(s[i]==s[i+1]){
                s.erase(i,1);
                i--;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}