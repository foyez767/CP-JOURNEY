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
        ll n=0;
        cin>>n;
        vector<string>vec;
        string s,p,q;
        for(int i=0;i<n;i++){
            cin>>s;
            vec.push_back(s);
        }
        ll cnt=0,x=0;
        for(int i=0;i<(n-1);i++){
            s=vec[i];
            for(int j=i+1;j<n;j++){
                p=vec[j];
                x=0;
                if(s[0]==p[0] && s[1]!=p[1]){
                    x=abs(s[1]-p[1]);
                    if(x<=2 && x>=1) cnt++;
                }else if(s[0]!=p[0] && s[1]==p[1]){
                    x=abs(s[0]-p[0]);
                    if(x<=2 && x>=1) cnt++;
                }
            }
        }
    cout<<cnt<<nn;
    }
    
    return 0;
}