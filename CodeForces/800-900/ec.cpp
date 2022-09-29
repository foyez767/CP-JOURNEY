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
    ll n=0,cnt=0,x=0,first=0,last=0,pp=0,uni=0,uni2=0,num=0,flag=0;
    cin>>n;
    vector<ll>vec(n+1);
    ll cont[n+1]{};
    for(ll i=1;i<=n;i++){
        cin>>x;
        if(cont[x]==0) uni++;
        cont[x]++;
        vec[i]=x;
        if(i==1) first=x;
        if(i==n) last=x;
        if(vec[i]<vec[i-1]) pp=1;
    }
    num=count(vec.begin(),vec.end(),last);
    if(pp==0) cout<<0<<nn;  //ascending already
    else if(n==uni) cout<<n-1<<nn;  //not ascending but every number is unique
    else if(num==2 && vec[n-1]!=last) cout<<uni<<nn;
    else{
        for(int j=n;j>=1;j--){
            if(vec[j]<vec[j-1]){
                ll k=n-1;
                while(k>0){
                    if(cont[vec[k]]!=0){
                        cont[vec[k]]=0;
                    }
                    k--;
                }
                flag=1;
            }
        }
        cout<<uni2<<nn;       
    }
}
    

    return 0;
}