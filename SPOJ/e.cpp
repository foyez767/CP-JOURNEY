//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

 
void solve(){
    int n=0,cnt=0;
    cin>>n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cnt=0;
            while(n%i==0){
                cnt++;
                n/=i;
            }
            cout<<i<<" : "<<cnt<<endl;
        }
    }
    if(n>1) cout<<n<<" : "<<1<<endl;
}
 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
// cin>>t;
while(t--)   solve();
    
    return 0;
}