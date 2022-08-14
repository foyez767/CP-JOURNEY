#include<bits/stdc++.h>
#define ll long long
#define end "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    ll n=0,t=0,vas_cnt=0,pat_cnt=0,x=0,flag=0;
    cin>>n;
    ll a=ceil(n/2),b=floor(n/2);
    int aa[a+1],bb[b+1];
    if(n!=1){
        for(int i=1;i<=a;i++)
            cin>>aa[i];
        for(int i=1;i<=b;i++)
            cin>>bb[i];

        ll q=0;
        while(q--){
            flag=0;
            cin>>x;
            for(int i=1;i<=a;i++){
                if(aa[i]==x){
                    vas_cnt+=i;
                    pat_cnt+=(b+(a-i));
                    flag=1;
                }
            }
            if(flag==0){
                for(int i=1;i<=b;i++){
                    if(bb[i]==x){
                        vas_cnt+=(a+i);
                        pat_cnt+=(b-i+1);
                    }
                }
            }
        }
    }
    if(flag!=0)
        cout<<vas_cnt<<" "<<pat_cnt<<end;
    else
        cout<<1<<" "<<1<<end;
    return 0;
}