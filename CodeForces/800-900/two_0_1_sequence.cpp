#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    int t=0;
    cin>>t;
    while(t--){
    int a=0,b=0;
    cin>>a>>b;
    string s1,s2;
    cin>>s1>>s2;
    
    if(a<b)
        cout<<"NO\n";
    else if(a==b){
        if(s1==s2)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    else{
        if(s2[0]=='0'){
            for(int i=0;i<s1.length();i++){
                if(s1[i] < s1[i+1]){
                    s1[i+1]=s1[i];
                    s1.erase(i,1);
                    i--;
                    if(s1.length()==s2.length())
                        break;
                }else if(s1[i]==s1[i+1]){
                    s1.erase(i,1);
                    i--;
                    if(s1.length()==s2.length())
                        break;
                }else{
                    s1.erase(i,1);
                    i--;
                    if(s1.length()==s2.length())
                        break;
                }
            }
        }else if(s2[0]=='1'){
            for(int i=0;i<s1.length();i++){
                if(s1[i] > s1[i+1]){
                    s1[i+1]=s1[i];
                    s1.erase(i,1);
                    i--;
                    if(s1.length()==s2.length())
                        break;
                }else if(s1[i]==s1[i+1]){
                    s1.erase(i,1);
                    i--;
                    if(s1.length()==s2.length())
                        break;
                }else{
                    s1.erase(i,1);
                    i--;
                    if(s1.length()==s2.length())
                        break;
                }
            }
            
        }
    }
    if(s1==s2)
        cout<<"YES\n";
    else
        cout<<"NO\n";

}

    return 0;
}