#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    string s,str;int a=0,b=0,flag=0;char ch;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i] == '.'){
            a=i;
            break;
        }
    }
    s.erase(0,a);
    long double x=0;
    vector<string> vec;
    for(int i=2;i<10;i++){
        for(int j=1;j<=4;j++){
            // x=pow(i,-j);
            vec.push_back(pow(i,-j));

        }
    }
    // cout<<s<<endl;
    

    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// ios::sync_with_stdio(0);
// cin.tie(0);
  
//     int n=5;
//     double b=0;
//     b=pow(n,-2);
//     cout<<b<<endl;
//     return 0;
// }