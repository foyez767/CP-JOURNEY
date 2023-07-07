//**********In the name of Allah, most Gracious and Merciful******
//Nov/05/2022 06:43UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll n=0,cnt=0,uni=0,x=0,flag=0,f_unsort=0,max_indx=0,ans=0;      cin>> n;
    vector<ll> vec(n+1,0),MaxIndex(n+1,0),mark(n+1,0);

    for(ll i=1; i<=n; i++){
        cin>> vec[i];
        mark[vec[i]]=1;
        MaxIndex[vec[i]]=i;
    }

    if(!is_sorted(vec.begin(),vec.end()))
    {
        for(ll i=n-1; i>=1; i--){
            if(vec[i]>vec[i+1]){
                f_unsort= i;
                break;
            }
        }

        for(ll i=1; i<=f_unsort; i++){
            max_indx = max(max_indx, MaxIndex[vec[i]]);
        }

        for(ll i=1; i<=max_indx; i++)
        {
           if(mark[vec[i]]==1){
                cnt++;
                mark[vec[i]]=-1;
           }
        }
    }
    cout<< cnt <<nn;


 }

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}