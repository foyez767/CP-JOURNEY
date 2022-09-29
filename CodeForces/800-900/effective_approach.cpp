//Aug/14/2022 20:42UTC-6 : 227B
#include<bits/stdc++.h>
#define ll long long
#define end "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    ll n=0,x=0;
    cin>>n;
    ll arr[n+1] {},vas_index[n+1] {},pet_index[n+1]{};
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    //index cnt
    for(ll i=1;i<=n;i++){
        vas_index[arr[i]]=i;
        pet_index[arr[i]]=(n-i+1);
    }
    ll q=0,vas_cnt=0,pet_cnt=0;
    cin>>q;
    while(q--){
        cin>>x;
        vas_cnt+=(vas_index[x]);
        pet_cnt+=(pet_index[x]);
    }
    cout<<vas_cnt<<" "<<pet_cnt<<end;

    return 0;
}