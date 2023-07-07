//**********In the name of Allah, most Gracious and Merciful******
//Oct/21/2022 10:19UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    ll n=0,a=0,sum=0;         cin>> a>> sum;
    vector<ll>li;
    while(sum)
    {
        ll x= a%10;
        ll y= sum%10;
        if(x<=y) li.push_back(y-x);
        else{
            sum/=10;
            y=(y)+(sum %10)*10;
            if(x<y and y>=10 and y<=18){
                li.push_back(y-x);
            }else{
                cout<< -1 <<nn;
                return;
            }
        }
        a/=10;
        sum/=10;
    }

    if(a) cout<< -1 <<nn;
    else{
        reverse(li.begin(),li.end());
        for(ll i=0; i<li.size(); i++)
        {
            if(i==0 and li.front()==0){
                li.erase(li.begin(),li.begin()+1);
                i--;
                continue;
            }
            cout<< li[i];
        }
        cout<<nn;
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