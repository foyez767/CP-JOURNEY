//Aug/07/2022 07:57UTC-6 : 339A
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    string s;
    cin>>s;
    string s_plus,s_num;
    ll plus=0,num=0,j=0;
    std::sort(s.begin(),s.end());
    for(int i=0;i<s.length();i++){
        if(s[i]=='+')
            j++;
    }
    ll cnt=0,k=j,r=j;
    for(int i=0;i<(s.length()-r);i++){
        cout<<s[j];
        j++;
        if(cnt<k){
            cout<<"+";
            cnt++;
        }
    }
    return 0;
}