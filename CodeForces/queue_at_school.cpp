//Aug/05/2022 18:53UTC-6:266B
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    ll n=0,t=0;
    string s;
    cin>>n>>t>>s;
    for(int i=1;i<=t;i++){
        for(int j=0;j<n;j++){
            if(s[j]<s[j+1]){
                char temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
                j++;
            }
        }
    }
    cout<<s<<endl;

    return 0;
}