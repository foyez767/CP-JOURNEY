#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll t=0;
    cin>>t;
    while(t--){
        ll n=0,x=0,cnt=0;
        cin>>n;
        string s;
        for(int i=0;i<n;i++){
            cin>>x;
            s+=(char)(x+'0');
        }
        for(int i=0;i<(s.length()-1);i++){
            for(int j=i+1;j<s.length();j++){
                if(s[i]==s[j]){
                    cnt++;
                    s.erase(0,1);
                    i=-1;
                    break;
                }
            }
        }        
        cout<<cnt<<nn;
    }
    
    return 0;
}