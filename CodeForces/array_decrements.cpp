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
    
    ll n=0,k=0,flag=0;
    cin>>n;
    ll aa[n]{},bb[n]{};
    for(int i=0;i<n;i++) cin>>aa[i];
    for(int i=0;i<n;i++) cin>>bb[i];
    
    while(1){
        if(aa[k]>bb[k]){
            for(int j=0;j<n;j++){
                if(aa[j]!=0) aa[j]--;
            }
        }else if(aa[k]<bb[k]){
            break;
        }else if(k==(n-1)) break;
        else if(aa[k]==bb[k]){
            k++;
        }
    }
    for(int i=0;i<n;i++){
        if(aa[i]!=bb[i]){
            flag=1;
            break;
        }
    }

    (flag==0)? cout<<"YES"<<nn : cout<<"NO"<<nn;
}
   return 0;
}