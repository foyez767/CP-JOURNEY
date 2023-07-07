//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    string s1,s2;       cin >> s1 >>s2;
    if(s1=="M"){
        auto it1=find(s2.begin(),s2.end(),'L');
        auto it2=find(s2.begin(),s2.end(),'S');
        if(it1!=s2.end()){
            cout<<"<"<<nn;
        }else if(it2 != s2.end()){
            cout<<">"<<nn;
        }else{
            cout<<"="<<nn;
        }       
    }else if(s2=="M"){
        auto it1=find(s1.begin(),s1.end(),'L');
        auto it2=find(s1.begin(),s1.end(),'S');
        if(it1!=s1.end()){
            cout<<">"<<nn;
        }else if(it2 != s1.end()){
            cout<<"<"<<nn;
        }else{
            cout<<"="<<nn;
        }
    }else{
        int a=s1.length(),b=s2.length();
        char c1=s1[a-1],c2=s2[b-1];
        char s='S',l='L';
        if(c1==s && c2==s){
            if(a>b) cout<<"<"<<nn;
            else if(a<b) cout<<">"<<nn;
            else cout<<"="<<nn;

        }else if(c1==l and c2==l){
            if(a>b) cout<<">"<<nn;
            else if(a<b) cout<<"<"<<nn;
            else cout<<"="<<nn;
        }else if(c1==s and c2==l){
            cout<<"<"<<nn;
        }else if(c1==l and c2==s){
            cout<<">"<<nn;
        }
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