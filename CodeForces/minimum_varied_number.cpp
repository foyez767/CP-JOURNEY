//Sep/04/2022 14:23UTC-6	
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
        ll s=0,a=9;
        vector<ll>digit;
        cin>>s;
        if(s>=1 && s<=9){
            cout<<s<<nn;
            continue;
        }
        while(s>0){
                s-=a;
                digit.push_back(a);
                if(s<a){
                    digit.push_back(s);
                    break;
                }else a--;
        }
        sort(digit.begin(),digit.end());
        for(int i=0;i<digit.size();i++){
            cout<<digit[i];
        }
        cout<<nn;
    }
    
    return 0;
}