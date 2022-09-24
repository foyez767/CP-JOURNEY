//Sep/11/2022 23:36UTC-6
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
        ll x=0,n=0,k=0,maxi=0;
        vector<ll>vec;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            vec.push_back(x);
        }
        maxi=(vec[n-1]-vec[0]);
        for(int i=1;i<n;i++){
            maxi=max(maxi,(vec[i]-vec[0]));
        }
        for(int i=0;i<(n-1);i++){
            maxi=max(maxi,(vec[n-1]-vec[i]));
        }
        for(int i=1;i<(n);i++){
            maxi=max(maxi,(vec[i-1]-vec[i]));
        }

        if(n==1) cout<<0<<nn;        
        else cout<<maxi<<nn;
        
        vec.clear();
    }
    
    return 0;
}