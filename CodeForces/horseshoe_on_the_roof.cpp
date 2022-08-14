//Aug/13/2022 23:08UTC-6 : 228A
#include<bits/stdc++.h>
#define ll long long
#define end "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll cnt=0;
    ll arr[4]{};
    for(ll i=0;i<4;i++){
        cin>>arr[i];
    }
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(arr[j]){
                if(arr[i]==arr[j]){
                    cnt++;
                    arr[j]=0;
                }
            }
        }
    }
    cout<<cnt<<end;
    
    return 0;
}