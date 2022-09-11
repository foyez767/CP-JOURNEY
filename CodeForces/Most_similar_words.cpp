//Sep/05/2022 23:06UTC-6
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
    ll n=0,m=0,move=0,min=0,diff=0;
    cin>>n>>m;
    string st,p,q;
    vector<string>s;
    vector<ll>mini;
    for(int i=0;i<n;i++){
        cin>>st;
        s.push_back(st);
    }
    sort(s.begin(),s.end());
    for(int i=0;i<n;i++){
        for(int k=i+1;k<n;k++){
            p=s[i];
            q=s[k];
            for(int j=0;j<m;j++){
            move+=abs(q[j]-p[j]);
        }
        mini.push_back(move);
        move=0;diff=0;
    }
}      
    min=*(min_element(mini.begin(),mini.end()));
    cout<<min<<nn;
}    
    return 0;
}