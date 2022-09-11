//Sep/05/2022 22:01UTC-6
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
        string s;
        ll arr[6]{},x=0;
        cin>>s;
        for(int i=0;i<s.length();i++){
            x=(ll)(s[i]-'0');
            arr[i]=x;
        }
        ll p=arr[0]+arr[1]+arr[2];
        ll q=arr[3]+arr[4]+arr[5];
        (p==q)? cout<<"YES"<<nn : cout<<"NO"<<nn;
    }
    
    return 0;
}