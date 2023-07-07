//**********In the name of Allah, most Gracious and Merciful******
//Oct/17/2022 04:44UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    ll n=0,x=0,cnt=0,flag=0;     cin>> n;
    char start;
    string s;                   cin>> start>> s;
    vector<ll>green,current;
    if(start=='g'){
        cout<< 0 <<nn;
        return;
    }

    s+=s;
    ll len=s.length();
    for(ll i=0; i<len; i++){
        if(s[i]=='g')
            green.push_back(i);
        else if(s[i]==start)
            current.push_back(i);
    }
    ll i=0,j=0;
    while(j<green.size()){
        if(i<current.size() and j<green.size() and green[j]>=current[i]){
            cnt= max(cnt,green[j]-current[i]);
            i++;
        }else j++;   
    }
    cout << cnt <<nn;
 }
 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}