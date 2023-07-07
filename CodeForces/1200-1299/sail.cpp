//**********In the name of Allah, most Gracious and Merciful******
//Oct/26/2022 00:12UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll t=0,a=0,b=0,x=0,y=0,pre_w=0,pre_e=0,pre_s=0,pre_n=0,need_w=0,need_s=0,need_n=0,need_e=0,flag=0,ans=0;
    cin>> t>> x>> y>> a>>b;
    string s;       cin>> s;
    pre_e=count(s.begin(),s.end(),'E');
    pre_n=count(s.begin(),s.end(),'N');
    pre_s=count(s.begin(),s.end(),'S');
    pre_w=count(s.begin(),s.end(),'W');

    if(a>=x and b>=y){
        need_e= a-x;
        need_n= b-y;
        if(need_e<=pre_e and need_n<=pre_n){
            for(ll i=0; i<s.length(); i++)
            {
                if(need_e>0 and s[i]=='E') need_e--;
                else if(need_n>0 and s[i]=='N') need_n--;

                ans++;
                if(need_e==0 and need_n==0) break;
            }
        }else flag=1;

    }else if(a<=x and b>=y){
        need_w= x-a;
        need_n= b-y;
        if(need_w<=pre_w and need_n<=pre_n){
            for(ll i=0; i<s.length(); i++)
            {
                if(need_w>0 and s[i]=='W') need_w--;
                else if(need_n>0 and s[i]=='N') need_n--;

                ans++;
                if(need_w==0 and need_n==0) break;
            }
        }else flag=1;

    }else if(x>=a and y>=b){
        need_w= x-a;
        need_s= y-b;
        if(need_w<= pre_w and need_s<=pre_s){
            for(ll i=0; i<s.length(); i++)
            {
                if(need_w>0 and s[i]=='W') need_w--;
                else if(need_s>0 and s[i]=='S') need_s--;

                ans++;
                if(need_w==0 and need_s==0) break;
            }
        }else flag=1;

    }else if(a>=x and y>=b){
        need_e= a-x;
        need_s= y-b;
        if(need_e<=pre_e and need_s<=pre_s){
            for(ll i=0; i<s.length(); i++)
            {
                if(need_e>0 and s[i]=='E') need_e--;
                else if(need_s>0 and s[i]=='S') need_s--;

                ans++;
                if(need_e==0 and need_s==0) break;
            }
        }else flag=1;

    }else flag=1;

    if(flag) cout<< -1 <<nn;
    else cout<< ans <<nn;

 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
// cin>>t;
while(t--)   solve();
    
    return 0;
}