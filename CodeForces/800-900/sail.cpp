#include<bits/stdc++.h>
#define outer0(b) for(int i=0;i<b;i++)
#define outer1(b) for(int i=1;i<=b;i++)
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll t=0,a=0,b=0,x=0,y=0;
    cin>>t>>x>>y>>a>>b;
    string s;
    cin>>s;
    ll k=0,flag=0;

    if(x==a && y<b){
        for(ll i=0;i<s.length();i++){
            if(s[i]=='N'){
                x=x;y+=1;
                k++;
            }
            else k++;
            if(x==a && y==b){
                flag=1;break;
            }
        }

    }else if(x==a && y>b){
        for(ll i=0;i<s.length();i++){
            if(s[i]=='S'){
                x=x;y-=1;
                k++;
            }
            else k++;
            if(x==a && y==b){
                flag=1;break;
            }
        }

    }else if(y==b && x>a){
        for(ll i=0;i<s.length();i++){
            if(s[i]=='W'){
                x-=1;y=y;
                k++;
            }
            else k++;
            if(x==a && y==b){
                flag=1;break;
            }
        }

    }else if(y==b && x<a){
         for(ll i=0;i<s.length();i++){
            if(s[i]=='E'){
                x+=1;y=y;
                k++;
            }
            else k++;
            if(x==a && y==b){
                flag=1;break;
            }
        }
    }
     else if(x>a && y<b){
        for(ll i=0;i<s.length();i++){
            if(s[i]=='N'){
                x=x;y+=1;
                k++;
            }else if(s[i]=='W'){
                x-=1;y=y;
                k++;
            }else k++;
            if(x==a && y==b){
                flag=1;break;
            }
        }
    }else if(x<a && y<b){
        for(ll i=0;i<s.length();i++){
            if(s[i]=='N'){
                x=x;y+=1;
                k++;
            }else if(s[i]=='E'){
                x+=1;y=y;
                k++;
            }else k++;
            if(x==a && y==b){
                flag=1;break;
            }
        }

    }else if(x>a && y>b){
        for(ll i=0;i<s.length();i++){
            if(s[i]=='S'){
                x=x;y-=1;
                k++;
            }else if(s[i]=='W'){
                x-=1;y=y;
                k++;
            }else k++;
            if(x==a && y==b){
                flag=1;break;
            }
        }
    }else if(x<a && y>b){
        for(ll i=0;i<s.length();i++){
            if(s[i]=='S'){
                x=x;y-=1;
                k++;
            }else if(s[i]=='E'){
                x+=1;y=y;
                k++;
            }else k++;
            if(x==a && y==b){
                flag=1;break;
            }
        }
    }

    (flag==0)? cout<<-1<<nn : cout<<k<<nn;
    return 0;
}