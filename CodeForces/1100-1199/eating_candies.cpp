//**********In the name of Allah, most Gracious and Merciful******
//Oct/06/2022 01:54UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll n=0,i=0,j=0,x=0,al=0,bo=0;
    cin>> n;
    ll prefix[n+1] {},arr[n]{};
    vector<ll>suffix(n+1,0);
    for( i=0; i<n;i++){
        cin>>arr[i];
        prefix[i+1]=prefix[i]+arr[i];
    }
    j=n-1;
    for(i=0;i<n; i++){
        suffix[i+1]=suffix[i]+arr[j];
        j--;
    }
    reverse(suffix.begin(),suffix.end());

    i=1; j=n-1;
    while(j-i>=0){
        if(prefix[i]==suffix[j]){
            al=i;
            bo=n-j;
            i++; j--;
        }else if(prefix[i]>suffix[j]) j--;
        else i++;
    }
    cout<< al+bo <<nn;
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}