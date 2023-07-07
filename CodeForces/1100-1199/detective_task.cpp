//**********In the name of Allah, most Gracious and Merciful******
//Oct/20/2022 04:45UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    string s;       cin >>s;
    ll cntq=0,cnt1=0,len=s.length(),cntZ;
    cntq=count(s.begin(),s.end(),'?');
    cnt1=count(s.begin(),s.end(),'1');
    cntZ=count(s.begin(),s.end(),'0');

    if(s[0]=='0' or (s[0]=='1' and len==1) or cnt1==len or (cntZ==0 and s[len-1]=='1')){
        cout<< 1 <<nn;
        return;
    }else if(cntq==len){
        cout<< len <<nn;
        return;
    }
    ll i=0,j=1,flag=0,cnt=0;
    auto it=find(s.begin(),s.end(),'0');
    if(it!=s.end()){
        i=it-s.begin();
        for(ll k=i; k>=0; k--)
        {
        if(s[k] != '1')
            cnt++;
        else{
            cnt++;
            break;
            }
        } 
        cout << cnt <<nn;
    }else{
        for(i=len; i>=0; i--){
            if(s[i]!='1')
                cnt++;
            else break;
        }
        cout << cnt <<nn;
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