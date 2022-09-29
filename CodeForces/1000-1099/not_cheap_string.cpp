//**********In the name of Allah, most Gracious and Merciful******
//Sep/26/2022 06:00UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

  
void solve(){
    string s;
    ll p=0, price =0,arr[27] {},x=0, flag=0;
    cin>>s >> p;
    for(ll i=0;i<s.length();i++){
        x=s[i]-96;
        arr[x]++;
        price+=(x);
    }
    if(price<=p) cout<< s <<nn;
    else{
        for(ll i=26; i>=1; i--){
            if(arr[i]==0) continue;
                x=arr[i];
            while(x--){
                arr[i]--;
                price-=i;
                if(price<=p){
                    flag=1; break;
                }
            }
            if(flag==1){
                break;
            }
        }

        for(ll i=0;i<s.length();i++){
            if(arr[s[i]-96]>0){
                cout<<s[i];
                arr[s[i]-96]--;
            }
        }
        cout<<nn;
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