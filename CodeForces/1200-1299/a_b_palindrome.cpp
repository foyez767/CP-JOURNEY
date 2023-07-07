//**********In the name of Allah, most Gracious and Merciful******
//Oct/23/2022 04:11UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll a=0,b=0,dif=0,ini_a=0,ini_b=0;       cin>> a>>  b;
    ini_a=a,ini_b=b;
    string s;               cin>> s;
    ll cntZ=count(s.begin(),s.end(),'0');
    ll cntO=count(s.begin(),s.end(),'1');
    ll cntQ=count(s.begin(),s.end(),'?');
    if(cntQ==0 and (cntZ>a or cntO>b)){
        cout<< -1 <<nn;
        return;
    }
    char ch='X';
    if((a+b) % 2==0) dif=1;
    else{
        ll len=s.length()/2;
        dif=2;
        ch=s[len];
        if(ch=='0') a-=1;       
        else if(ch=='1')    b-=1;
        else{
            if(a%2==1){
                s[len]='0';
                a-=1;
            }else{
                s[len]='1';
                b-=1;
            }
        }
    } 
    ll i=0,j=s.length()-1;

    while(j-i>=dif)
    {
        if(s[i]=='0' and s[j]=='0') a-=2;
        else if(s[i]=='1' and s[j]=='1') b-=2;
        else if(s[i]=='0' and s[j]=='?'){
            s[j]='0';
            a-=2;
        }else if(s[i]=='1' and s[j]=='?'){
            s[j]='1';
            b-=2;
        }else if(s[i]=='?' and s[j]=='0'){
            s[i]='0';   a-=2;
        }else if(s[i]=='?' and s[j]=='1'){
            s[i]='1';
            b-=2;
        }
        if(a<0 or b<0){
            cout<< -1 <<nn;
            return;
        }
        i++;
        j--;
    }
    // cout << s <<nn;
    i=0,j=s.length()-1;
    while(j-i>=dif)
    {
        if(s[i]=='?' and s[j]=='?' and a>=2){
            s[i]='0';
            s[j]='0';
            a-=2;
        }else if(s[i]=='?' and s[j]=='?' and b>=2){
            s[i]='1';
            s[j]='1';
            b-=2;
        }
        if(a<0 or b<0){
            cout<< -1 <<nn;
            return;
        }
        i++;
        j--;
    }
    i=0,j=s.length()-1;
    while(j-i>=dif)
    {
        if((s[i]!=s[j]) or (s[i]=='?') or (s[j]=='?')){
            cout<< -1 <<nn;
            return;
        }
        i++;
        j--;
    }
    cout<< s <<nn;
}

int main(){
    ll t=1;
    cin>> t;
    while(t--)  solve();
    
    return 0;
}