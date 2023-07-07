//**********In the name of Allah, most Gracious and Merciful******
//Oct/04/2022 10:57UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    ll n=0,k=0,cnt=0,x=0,j=1;
    string s;
    cin>>n >>k >>s;
    ll mark[n+1] {};
    for(ll i=0; i<s.length() ;i++){
        if(s[i]=='W'){
            mark[i+1]=1;
        }else{
            mark[i+1]=0;
        }
    }
    if(s.length()==1 && s=="W") cout<< 1 <<nn;
    else if(s.length()==1 && s=="B") cout<< 0 <<nn;
    else{
        vector<ll>vec;
        for(ll i=1; i<=n; i++){
           if(mark[i]==1) cnt++;
           x++;
           if(x<k) continue;
           else{
            vec.push_back(cnt);
            cnt-=mark[j];
            j++;
            x--;
           }           
        }     
        cout << *(min_element(vec.begin(),vec.end())) << nn;
    }
    
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}