//Sep/07/2022 07:23UTC-6	
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
        ll n=0,x=0;
        cin>>n;
        vector<ll>vec (n+1);
        for(int i=0;i<n;i++){
            cin>>x;
            vec[x]++;
        }
        ll maxi=*(max_element(vec.begin(),vec.end()));
        if(maxi<3) cout<<-1<<nn;
        else {
            for(int i=1;i<=n;i++){
                if(vec[i]>=3){
                    cout<<i<<nn;
                    break;
                }
            }
        }       
    }
    
    return 0;
}