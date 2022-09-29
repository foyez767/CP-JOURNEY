//Aug/23/2022 23:36UTC-6 :208A
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    vector<string>vec;
    string s,str;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
            i+=2;
        else{
            str+=s[i];
            if(s[i+1]=='W' && s[i+2]=='U' && s[i+3]=='B'){
                vec.push_back(str);
                str.erase(str.begin(),str.end());
            }
        }
    }
    vec.push_back(str);
    for(auto v:vec)
        cout<<v<<" ";
    
    return 0;
}