#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    int t=0;
    cin>>t;
    while(t){
        int x=0,l=0;
        string s{},str{},c{};
        cin>>x>>s;
        while(l != x){
            //move operation
            l++;
        //cut
        for(int i=0;i<l;i++){
                str[i]=s[i];
        }
        cout<<str<<endl;
        int j=0;
        for(int i=l;i<s.length();i++){
            c[j]=s[i];
            j++;
        }
        cout<<c<<endl;
        //paste
        int ran=str[l-1];
        int a=0;
        for(int i=1;i<=ran;i++){
            for(int k=0;k<c.length();k++){
                s[a]=c[k];
                a++;
            }
        }
        cout<<s<<endl;
        }
        cout<<s.length()<<"\n";
        

        t--;
    }


    return 0;
}