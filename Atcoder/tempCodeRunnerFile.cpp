#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    string str,s_cp;
    int flag=0,a=0;
    cin>>str;
    std::sort(str.begin(),str.end());
    s_cp="0123456789";
    for(int i=0;i<=9;i++){
        if(s_cp[i]!=str[i]){
            cout<<i<<endl;
            break;
        }
    }


    return 0;
}