//**********In the name of Allah, most Gracious and Merciful******
//Oct/23/2022 05:03UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    string a,b,s_max,s_min;     cin>> a>> b;
    if(a.length()>b.length()){
        s_max=a;
        s_min=b;
    }else{
        s_max=b;
        s_min=a;
    }

    ll flag=0,cnt=0,k=0,len=0,ans=0;
    for(ll i=0; i<s_max.length(); i++)
    {
        k=i+1;
        cnt=0;
        for(ll j=0; j<s_min.length(); j++)
        {
            if(s_max[i]==s_min[j]){
                cnt++;
                ll q=j+1;
                for(ll p=i+1; p<s_max.length() and q<s_min.length(); p++)
                {
                    if(s_max[p]==s_min[q]){
                        cnt++;
                        q++;
                    }else break;

                }
                ans=max (ans,cnt);
                cnt=0;
            }
        }
    }
    cout<< a.length()+b.length()-ans*2 <<nn;
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}