#include<bits/stdc++.h>
#define outer0(b) for(int i=0;i<b;i++)
#define outer1(b) for(int i=1;i<=b;i++)
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    ll t=0;
    cin>>t;
    while(t--){
        int n=0,flag=0;
        cin>>n;
        string a,b,c,d,s1,s2;
        cin>>s1>>s2;
        a=s1;b=s2,c=s1,d=s2;
        if(s1==s2){
           flag=1;
        }else{
            for(int i=0;i<a.length();i++){
                if(a[i]=='G')
                    a[i]='B';
            }
            if(a==b) flag=1;
            else{
                for(int i=0;i<b.length();i++){
                    if(b[i]=='G')
                        b[i]='B';
                }
                if(a==b) flag=1;
                else{
                    for(int i=0;i<c.length();i++){
                        if(c[i]=='B')
                            c[i]='G';
                    }
                    if(c==d) flag=1;
                    else{
                        for(int i=0;i<d.length();i++){
                            if(d[i]=='B')
                                d[i]='G';
                        }
                        if(c==d) flag=1;
                        else flag=0;
                    }
                }
            }
        }
        (flag!=0)? cout<<"YES"<<nn : cout<<"NO"<<nn;

    }
    return 0;
}