//Sep/04/2022 08:42UTC-6
#include<bits/stdc++.h>
#define outer0(b) for(int i=0;i<b;i++)
#define outer1(b) for(int i=1;i<=b;i++)
#define ll long long
#define nn "\n"
using namespace std;
const string str="YES";

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    int t=0;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
    for(int i=0;i<s.length();i++){
        s[i]=toupper(s[i]);
    }
    (s==str)? cout<<"YES"<<nn : cout<<"NO"<<nn;
    } 
    return 0;
}