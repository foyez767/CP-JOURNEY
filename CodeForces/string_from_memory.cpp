//Sep/05/2022 11:52UTC-6
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
    set<char>se;
    cin>>s;
    ll k=0,cnt=0;
    for(int i=0;s[i]!='\0';i++){
        se.insert(s[i]);
        if(se.size()>3){
            cnt++;
            se.clear();
            i--;
        }
    }
    (se.size()>0) ? cout<<cnt+1<<nn : cout<<cnt<<nn;
}

return 0;
}