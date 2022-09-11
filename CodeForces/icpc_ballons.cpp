//Sep/04/2022 08:56UTC-6
#include<bits/stdc++.h>
#define outer0(b) for(int i=0;i<b;i++)
#define outer1(b) for(int i=1;i<=b;i++)
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll t=0;
    cin>>t;
    while(t--){
        ll n=0,cnt=0;
        string s;
        cin>>n>>s;
        ll distinct[26] {};
        for(int i=0;i<s.length();i++){
            distinct[s[i]-65]++;  
        }
        for(int i=0;i<26;i++){
            if(distinct[i]>=1) cnt++;
        }
        cout<<n+cnt<<endl;
    }
    
    return 0;
}