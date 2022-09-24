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
    vector<char>vec;
    ll n=0,x=0,val,a=0,b=0;
    string s;
    cin>>n>>s;
    char ch;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]!='0'){
            x=(ll)(s[i]-'0');
            ch=(char)('a'+x-1);
            vec.push_back(ch);
        }else{
            a=(ll)(s[i-1]-'0');
            b=(ll)(s[i-2]-'0');
            x=b*10+a;
            ch=(char)('a'+x-1);
            vec.push_back(ch);
            i-=2;       

        }
    }
    for(int i=vec.size()-1;i>=0;i--){
        cout<<vec[i];
    }
        
    cout<<nn;
    vec.clear();
}
    
    return 0;
}