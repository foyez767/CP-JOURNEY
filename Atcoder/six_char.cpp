#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    string s;
    cin>>s;
    int size=s.length();
    if(size==3)
        cout<<s<<s<<"\n";
    else if(size==2)
        cout<<s<<s<<s<<"\n";
    else    
        {
            for(int i=0;i<6;i++){
            cout<<s;
                
            }
            cout<<endl;
                    }

    return 0;
}