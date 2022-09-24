//**********In the name of Allah, most Gracious and Merciful******
//Sep/22/2022 21:25UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
  
void solve(){
    ll x=0,k=0,n=0,p=9;
    cin>>x;
    if(x<10) cout<<x<<nn;
    else if(x>45) cout<<-1<<nn;
    else{
        while(x){
            if((x-p)<0){
                p=x;
            }
            n+=(p*pow(10,k));
            x-=p;
            p--;
            k++;
        }
        cout<<n<<nn;
    }
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--){
    solve();
}
    
    return 0;
}