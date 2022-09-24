//**********In the name of Allah, most Gracious and Merciful******
//Sep/19/2022 11:38UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

  
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll n=0,x=0,len=0;
cin>>n;
ll arr[n]{};
vector<ll>vec;
for(ll i=0; i<n; i++){
    cin>>arr[i];
}

for(ll i=0; i<n ;i++){
    if(arr[i]>=x){
        len++;
        x=arr[i];
    }
    else{
        vec.push_back(len);
        len=1;
        x=arr[i];
    }
}
if(len>=1) vec.push_back(len);
ll maxi=*(max_element(vec.begin(),vec.end()));
cout<< maxi <<nn;
   
    return 0;
}