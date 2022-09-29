//Sep/10/2022 18:27UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll t=0;
    cin>>t;
    while(t--){
        ll n=0,flag=0;
        cin>>n;
        ll color[n+1];
        for(int i=1;i<=n;i++) cin>>color[i];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==j) continue;
                if(color[i]==0) continue;
            if(color[i]>color[j]){
                    color[i]-=color[j];
                    color[j]=0;
            }else if(color[i]<color[j]){
                    color[j]-=color[i];
                    color[i]=0;
                }
            }
        }
      
        for(int i=1;i<=n;i++){
            if(color[i]!=0) {
                    cout<<i<<nn;
                    break;
                }
            }
    }
    
    return 0;
}