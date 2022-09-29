//Aug/17/2022 05:02UTC-6 :1674B
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    string str;
    int t=0;
    cin>>t;
    while(t--){
        cin>>str;
            ll p=str[0]-97;
            ll q=str[1]-97;
            ll x=(p*25+q);
            (str[1]>str[0]) ?  cout<<x<<endl :cout<<x+1<<endl;  
    }
    return 0;
}